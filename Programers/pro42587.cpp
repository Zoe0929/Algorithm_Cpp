#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int J = priorities[0];
    int count = 0;
    queue<pair<int, int>> q;
    for (int k = 0; k < priorities.size(); k++) {
        q.push(make_pair(k, priorities[k]));
    }

    for (int i = 0; i < priorities.size(); i++) {
        if (J < priorities[i]) {
            for (int p = 0; p < count; p++) {
                q.push(q.front());
                q.pop();
            }
            J = priorities[i];
        }
        else
        {
            count++;
        }
    }
    while (!q.empty())
    {
        answer++;
        if (q.front().first == location) {
            break;
        }
        q.pop();
    } 
    return answer;
}

int main() {
    vector<int> P = {2,1,3,2};
    int location = 2;
    solution(P, location);
}