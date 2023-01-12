#include<string>
#include <iostream>
#include<stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    int i = 0;
    
    while (true)
    {
        char c = s[i];
        if (c=='(' ) 
        {
            st.push(c);
        }
        else if (c == ')' ) {
            if (st.size() > 0) {
                if ( st.top() == '(' && c == ')') {
                    st.pop();
                }
                else {
                    answer = false;
                    break;
                }
               }
            else {
                answer = false;
                break;
            }
            }
        else 
        {
            if (st.empty()) {
                answer = true;
                break;
            }
            else {
                answer = false;
                break;
            }
        }
        i++;
    }
   
    return answer;
}

int main() {
    string s = "()()";
    cout << solution(s) << endl;
    return 0;
}