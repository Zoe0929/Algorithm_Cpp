#include <string>
#include <vector>
#include<queue>


using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    queue<int> q;

    int count = 0;
    for (int i = 0; i < progresses.size(); i++) {
        days.push_back((100 - progresses[i]) / speeds[i]);
    }
    for(int j=0;j<days.size();j++) {
        if (q.empty()) {
            q.push(days[j]);
            count++;
        }
        else {
            if (q.front() > days[j]) {
                count++;
                q.pop();
                q.push(days[j]);
        }
            else {
                answer.push_back(count);
                count = 1;
                q.push(days[j]);
            }
        }
        if (j + 1 == days.size()) {
            answer.push_back(count);
        }
    }
    return answer;
}

int main() {
    vector<int> P = { 95, 90, 99, 99, 80, 99 };
    vector<int> S = { 1, 1, 1, 1, 1, 1 };
    solution(P, S);
    return 0;
}