#include <string>
#include <vector>
#include<algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    for(int j=0;j<completion.size();j++){
                if(participant[j]!=completion[j]){
                    return participant[j];
                }
        }
    return participant[participant.size()-1];
}