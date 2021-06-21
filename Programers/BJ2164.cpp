#include<iostream>
#include<queue>
using namespace std;

int main() {
	int N;
	queue<int> q;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	while (q.size() == 1) {
		q.pop();
		q.push(q.front());
	}
	cout << q.front() << endl;
}