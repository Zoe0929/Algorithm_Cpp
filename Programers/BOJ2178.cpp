#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	char maze[100][100];
	string S;
	for (int y = 1; y < M+1; y++) { //MAZE ��ĭ�� ���� �ϳ��� �����ϱ� ���� ó��
		getline(cin, S);
		for (int x = 1; x < N+1; x++) {
			maze[x - 1][y - 1] = S[x - 1];
		}             
	}

}