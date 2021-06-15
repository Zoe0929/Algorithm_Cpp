#include <iostream>
#include<string>
#include<stack>

using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> st1, st2;
    for (int i = 0; i < s.length; i++) {
        st1.push(s[i]);
        }
    while (0) { 
        if (st2.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        else if (st1.top() == st2.top()) {

        }
    }
    return answer;
}