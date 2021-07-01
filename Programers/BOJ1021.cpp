#include<iostream>
#include<list>

using namespace std;

int main() {
	int N, M, A; // 입력받을 수들
	int count = 0;
	int tmp;
	list<int> li;

	cin >> N >> M;
	
	for (int i = 1; i <= N; i++) {
		li.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		cin >> A;
		if(li.size() != N) li.push_front(tmp);
		while (1) {
			if (A == li.front()) {
				tmp = li.front();
				li.pop_front();
				break;
			}
			else if (A > li.front()) {
				li.push_back(li.front());
				li.pop_front();
				count++;
			}
			else {
				li.push_front(li.back());
				li.pop_back();
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}