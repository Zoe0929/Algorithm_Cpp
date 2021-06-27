#include <string>
#include <vector>
#include<queue>


using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    queue<int> q;
    int longest_day = 0;

    int count = 0;
    for (int i = 0; i < progresses.size(); i++) {
        int d = (100 - progresses[i]) % speeds[i];
        if (d == 0) days.push_back((100 - progresses[i]) / speeds[i]);
        else days.push_back((100 - progresses[i]) / speeds[i]+1);
    }
    for(int j=0;j<days.size();j++) {
        if (q.empty()) {
            q.push(days[j]);
            count++;
            longest_day = days[j];
        }
        else {
            if (longest_day >= days[j]) {
                count++;
                q.pop();
                q.push(days[j]);
        }
            else {
                answer.push_back(count);
                count = 1;
                longest_day = days[j];
                q.pop();
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
    vector<int> P = { 93,30,55 };
    vector<int> S = { 1,30,5 };
    solution(P, S);
    return 0;
}