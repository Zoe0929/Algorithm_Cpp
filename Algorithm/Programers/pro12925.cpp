

#include <string>
#include <vector>
#include<iostream>
#include<math.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    if (s[0] == '-') {
        for (int i = 1; i <= s.length(); i++) {
            int A = pow(10, (s.length() - 1 - i));
            answer += (s[i] - 48) * A;
        }
        answer = -answer;
    }
    else if (s[0] == '+') {
        for (int i = 1; i <= s.length(); i++) {
            int A = pow(10, (s.length() - 1 - i));
            answer += (s[i] - 48) * A;
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            int A = pow(10, (s.length() - 1 - i));
            answer += (s[i] - 48) * A;
        }
    }
    return answer;
}
