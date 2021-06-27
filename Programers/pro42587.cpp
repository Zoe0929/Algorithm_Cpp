#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int J = priorities[0];
    int loc = location+1;
    queue<pair<int, int>> q;

    for (int i = 0; i < priorities.size(); i++) {
        q.push(make_pair(i,priorities[i]));
    }

    for (int j = 1; j < priorities.size(); j++) {
        if (J < priorities[j]) {
            J = q.front().first;
            q.push(q.front());
            q.pop();
            loc++;
        }
        else if(j==priorities.size()-1 || J>-priorities[j]) {
            answer = priorities.size()-loc;
        }
    }
    return answer;
}

int main() {
    vector<int> P = { 2,1,3,2 };
    int location = 2;

}