    #include <string>
    #include <vector>
    #include<stdlib.h>
    using namespace std;

    string solution(string s) {
        string answer = "";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                cnt=0;
                answer+=' ';
                break;
            }
            if(cnt%2==0){
                answer+=toupper(s[i]);
                cnt++;
                break;
            }
            else{
                answer+=islower(s[i]);
                cnt++;
                break;
            }
        }
        return answer;
    }

    int main(){
        solution("try hello world");
    }