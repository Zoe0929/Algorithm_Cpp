#include<iostream>
#include<list>

using namespace std;

int main() {
	int N;
	cin >> N;
	list<pair<int,int>> li;
	int tmp1,tmp2;
	for (int i = 1; i <= N; i++) {
		cin >> tmp1;
		li.push_back({ i,tmp1 });
	}
	int idx = 0;
	li.end() = li.begin();
	cout << li.front().first<<' ';
	tmp2 = li.front().second;
	li.pop_front();
	while (!li.empty()) {
		if (tmp2 > 0) {
			for (int j = 0; j < tmp2; j++) {
				li.push_back(li.front());
				li.pop_front();
			}
			tmp2 = li.back().second;
			cout << li.back().first << ' ';
			li.pop_back();
		}
		else 
		{
			for (int i = 0; i < -(tmp2); i++) {
				li.push_front(li.back());
				li.pop_back();
			}
			tmp2 = li.front().second;
			cout << li.front().first << ' ';
			li.pop_front();
		}
	}
	return 0;
}