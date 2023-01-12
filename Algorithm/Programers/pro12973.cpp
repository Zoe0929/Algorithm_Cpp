#include <iostream>
#include<string>
#include<stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> st;
    //무조건 0이 출력되는 경우 :: 입력된 문장이 없거나 글자수가 홀수인 경우에는 무조건 0
    if (s.empty() || s.size() % 2 != 0) {
        return 0;
    }

    for (int i=0; i<s.size();i++)
    {
        if (st.empty() || st.top() != s[i]) st.push(s[i]);
        else st.pop();
    }
    if (st.empty()) answer = 1;
    return answer;
}