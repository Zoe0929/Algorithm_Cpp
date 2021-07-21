#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int answer = 0;

void DFS(vector<int> numbers, int target, int count=0, int sum=0) {
    if (count+1==numbers.size()) {
        if (sum==target)
        {
            answer++;
        }
        return;
    }
    DFS(numbers, target, count + 1, sum - numbers[count]);
    DFS(numbers, target, count + 1, sum + numbers[count]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    DFS(numbers, target,0,0);
    return answer;
}