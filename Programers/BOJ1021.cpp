#include<iostream>
#include<string>
#include<list>
#include<vector>

using namespace std;

int main() {
	int N, M;
	int c;
	int answer = 0;
	vector<int> result;
	list<int> a;
	cin >> N >> M;
	for (int k = 1; k <= N; k++) {
		a.push_back(k);
	}
	for (int i = 0; i < M; i++) {
		cin >> c ;
		result.push_back(c);
	}
	int n = 0 ;
	while (1)
	{
		if (n+1 == M) break;
		if (a.front() == result[n]) {
			a.pop_front();
			n++;
		}
		else if (a.front() < result[n]) {
			a.push_front(a.back());
			a.push_back(a.back() - 1);
			answer++;
		}
		else if (a.front() > result[n]) {
			a.push_front(a.front() + 1);
			a.push_back(a.front());
			answer++;
		}
		
	}
	cout << answer << endl;

}