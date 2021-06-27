#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int J = priorities[0];
    queue<pair<int, int>> q;

    for (int i = 0; i < priorities.size(); i++) {
        if (q.empty() || J>=priorities[i]) q.push(make_pair(i, priorities[i]));
        else if (J < priorities[i]) {
            q.push(q.front());
            q.pop();
            J = priorities[i];
        }
    }
    while (!q.empty())
    {
        answer++;
        q.pop();
        if (q.front().first == location-1) {
            break;
        }
    } 
    return answer;
}

int main() {
    vector<int> P = {2,1,3,2};
    int location = 2;
    solution(P, location);
}