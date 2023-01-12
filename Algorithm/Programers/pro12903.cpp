#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int m=0;
    if(s.size()%2==0){
        m=s.size()/2;
        for(int i=m-1;i<m+1;i++){
            answer+=s[i];
        }    
    }
    else{
        m=s.size()/2;
        answer=s[m];
    }
    return answer;
}