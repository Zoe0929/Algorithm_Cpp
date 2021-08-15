#include <string>
#include <vector>
#include<iostream>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> score = { 0,0,0 }; // 학생들 점수
    
    vector<int> st1 = { 1,2,3,4,5 };
    vector<int> st2 = { 2,1,2,3,2,4,2,5 };
    vector<int> st3 = { 3,3,1,1,2,2,4,4,5,5 };

    for (int i = 0; i < answers.size(); i++) {
        if (st1[i % 5] == answers[i]) score[0]++;
        if (st2[i % 8] == answers[i]) score[1]++;
        if (st3[i % 10] == answers[i]) score[2]++;
    }
    vector<int> tmp = { 0,0,0 };
    for (int t = 0; t < 3; t++) tmp[t] = score[t];
    sort(tmp.begin(), tmp.end());
    int max = tmp[2];
    for (int k = 0; k < 3; k++) {
        if (max == score[k]) answer.push_back(k + 1);
    }

    return answer;
}