#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i=0;i<phone_number.size();i++){
        if(phone_number.size()<5) answer.push_back(phone_number[i]);
        else if(i>phone_number.size()-5) answer.push_back(phone_number[i]);
        else answer+="*";
    }
    return answer;
}