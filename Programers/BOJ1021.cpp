#include<iostream>
#include<list>

using namespace std;

int main() {
	int N, M, A; // �Է¹��� ����
	int count = 0;
	int tmp,index;
	list<int> li;
	list<int>::iterator iter = li.begin();

	cin >> N >> M;
	
	for (int i = 1; i <= N; i++) {
		li.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		cin >> A;
		if(li.size() != N) li.push_front(tmp);
		/*for (int j = 0; j < li.size();j++) {
			int l = *(iter);
			if (l == A) {
				index = j;
				break;
			}
		}*/
		while (1) {
			if (A == li.front()) {
				tmp = li.front();
				li.pop_front();
				break;
			}
			else if (index<li.size()-index) {
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