#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i=0;i<new_id.length();i++){
        if(new_id[i]>=65 && new_id[i]<=90){
            new_id[i]=tolower(new_id[i])// 1. 모든 대문자를 소문자로 치환
        }
    }
    for(int i=0;i<new_id.length();i++){
        if(((new_id[i]<=48 && new_id[i]>=57) || new_id[i]!=55 || new_id[i]!=46 || new_id[i]!=95){
            new_id.erase(new_id.begin()+i);
        }
    }
    for(int i=1;i<new_id.length();i++){
        if(new_id[i]=='.'&&new_id[i-1]=='.'){
            new_id.erase(new_id.begin()+i);
        }
    }
    if(new_id.front()=='.' ) new_id.erase(new_id.begin());
    if(new_id.end()=='.') new_id.erase(new_id.end()-1);
    if(new_id.length()==0) new_id="a";
    if(new_id.length()>=16){
        new_id.erase(15,new_id.length());
        if(new_id[14]=='.') new_id.erase(14);
    }
    if(new_id.length()<=2) {
        do{
            new_id.push_back(new_id[new_id.length()-1);
            }while(new_id.length()!=3);
    }
    return answer;
}