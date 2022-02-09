#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> cha(N,0);
    vector<int> fail;

    for(int i=0;i<stages.size();i++){
        cha[stages[i]-2]++;
    }
    for(int k=0;k<cha.size();k++){
        
    }
    
}