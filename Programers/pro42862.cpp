#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int min = n - lost.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < reserve.size(); j++) {
            if (lost[i] == reserve[j] + 1 || lost[i] == reserve[j] - 1) {
                n++;
            }
        }  
    }
    return answer;
}