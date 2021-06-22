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
	
	for (int n = 1; n <= N; n++) {
		q.push(n);
	}
	while (!q.empty()) {
		int i = 1;
		if (q.size() >= k) {
			while (1) {
				if (i == 3) {
					result.push_back(q.front());
					q.pop();
					break;
				}
				else {
					q.push(q.front());
					q.pop();
				}
				i++;
		}
		}
		else {
			for (int j = 0; j < k; j++) {
				q.push(q.front());
				q.pop();
			}
			result.push_back(q.front());
		}
		
	}
	for (auto i : result) cout << i << ' ';
}