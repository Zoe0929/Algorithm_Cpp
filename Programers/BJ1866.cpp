#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;

int main() {
	int N;
	int k;
	queue<int> q;
	vector<int> result;
	cin >> N >> k;
	int i = 1;
	while (!q.empty()) {
		if (i == 3) {
			result.push_back(q.front());
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		i++;
	}
	for (auto i : result) cout << i << ' ';
}