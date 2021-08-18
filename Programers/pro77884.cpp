#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector<int> measure;
    for (int i = left; i <= right; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) measure.push_back(j);
        }
    }
    sort(measure.begin(), measure.end());
    measure.erase(unique(measure.begin(), measure.end()), measure.end());
   
    for (int k = 0; k < measure.size(); k++) {
        answer += k;
    }
    return answer;
}

int main() {
    int left = 13, right = 17;
    solution(left, right);
}