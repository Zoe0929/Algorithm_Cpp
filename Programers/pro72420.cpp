#include <string>
#include <vector>
#include<algorithm>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i=0;i<new_id.length();i++){
        if(new_id[i]>=65 && new_id[i]<=90){
            new_id[i]=tolower(new_id[i]); // 1. 모든 대문자를 소문자로 치환
        }
    }
    for(int i=0;i<new_id.length();i++){
        if((new_id[i]<='0' && new_id[i]>='9') || new_id[i]!='.' || new_id[i]!='_' || new_id[i]!='-'){
            new_id.erase(new_id.begin()+i);
        }
    }   
    int i = 1;
    while (i < answer.length()){
        if (answer[i - 1] == '.' && answer[i] == '.'){
            answer.erase(answer.begin() + i);
            continue;
        }
        i++;
    }
    if(new_id.front()=='.' ) new_id.erase(new_id.begin());
    if(new_id.end()=='.') new_id.erase(new_id.length()-1);
    if(new_id.length()==0) new_id="a";
    if(new_id.length()>=16){
        new_id.erase(15,new_id.length());
        if(new_id[14]=='.') new_id.erase(14);
    }
    if(new_id.length()<=2) {
        do{
            new_id.push_back(new_id[new_id.length()-1]);
            }while(new_id.length()!=3);
    }
    return answer;
}