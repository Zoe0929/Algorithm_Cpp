#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    int i = 0;
    for (int i = 0; i < progresses.size(); i++) {
        days.push_back((100 - progresses[i]) / speeds[i]);
        if (days.size() > 1) {
            if (days[i - 0] >= days[i]) {
                i++;
            }
            else {
                answer.push_back(i);
                i = 0;
            }
        }
    }
    return answer;
}