#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> tr_n(n,1);
    for(int i=0;i<lost.size();i++){
        tr_n[lost[i]-1]--;
    }
    for(int j=0;j<reserve.size();j++){
        tr_n[reserve[j]-1]++;
    }
    for(int k=1;k<n;k++){
        if((tr_n[k-1]==0 && tr_n[k]==2)|| (tr_n[k-1]==2 && tr_n[k]==0)) { tr_n[k]=1; tr_n[k-1]=1;}
    }
    answer=count(tr_n.begin(),tr_n.end(),1)+count(tr_n.begin(),tr_n.end(),2);
    return answer;
}