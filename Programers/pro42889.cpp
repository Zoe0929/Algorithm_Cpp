#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> cha(N,0);
    vector<int> answer;
    for(int i=0;i<stages.size();i++){
        for(int j=0;j<N;j++){
            if(stages[i]==N+1) answer[N-1]++;
            else if(stages[i]==j+1) answer[j]++;
        }
    }
    
    return answer;
}