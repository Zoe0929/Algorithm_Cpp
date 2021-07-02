#include<iostream>
#include<list>

using namespace std;

int main() {
	int N, M, A; // 입력받을 수들
	int count = 0;
	int tmp,index;
	list<int> li;
	list<int>::iterator iter = li.begin();

	cin >> N >> M;
	
	for (int i = 1; i <= N; i++) {
		li.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		index = 0;
		cin >> A;
		if(li.size() != N) li.push_front(tmp);
		for (auto val : li) {
			if (val == A) break;
			index++;
		}
		
		while (1) {
			if (A == li.front()) {
				tmp = li.front();
				li.pop_front();
				break;
			}
			else if (index-1<li.size()-index+1) {
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