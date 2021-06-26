#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    int J = priorities[location];
    int count=0;


    for (int i = 0; i < priorities.size(); i++) {
        if (J <= priorities[i]) {
            count++;
            J = priorities[i];
        }
    }


    for (int j = 0; j < priorities.size(); j++) {
        q.push(make_pair(priorities[j],j));
    }
    for (int k = 0; k < count; k++) {
        q.push(q.front());
        q.pop();
    }
    while (!q.empty()) {
        int C=1;
        if (q.front().first == location) {
            answer = C;
            break;
        }
        else C++;
    }
    return answer;
}
