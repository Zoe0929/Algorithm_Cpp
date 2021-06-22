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
				if (i == k) {
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
		else if (q.size()>1) {
			for (int j = 1; j < k; j++) {
				q.push(q.front());
				q.pop();
			}
				result.push_back(q.front());
				q.pop();
			}
		else
		{
			result.push_back(q.front());
			q.pop();
		}

		
	}
	for (auto i : result) cout << i << ' ';
}