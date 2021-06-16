#include <iostream>
#include<string>
#include<stack>

using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> st1;
    //무조건 0이 출력되는 경우 :: 입력된 문장이 없거나 글자수가 홀수인 경우에는 무조건 0
    if (s.empty() || s.size() % 2 != 0) {
        answer = 0;
    }

    while (0) {


    }
    return answer;
}