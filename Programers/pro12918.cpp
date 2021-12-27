#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    if(s.size()==4 || s.size()==6){
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9') answer=true;
            else {
                answer=false;
                break;
            }
        }
    }
    return answer;
}

int main(){
    solution("0000");
}