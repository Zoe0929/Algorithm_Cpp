#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<char> temp;
    sort(strings.begin(),strings.end());
    for(int i=0;i<strings.size();i++){
        temp.push_back(strings[i][n]);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        for(int j=0;j<strings.size();j++){
            if(temp[i]==strings[j][n]) {
                answer.push_back(strings[j]);
                strings.erase(strings.begin()+j);
                }
        }
    }
    return answer;
}