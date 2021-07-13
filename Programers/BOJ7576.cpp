#include<iostream>
#include<stack>
#include<queue>
#include<vector>

#include<deque> //���̿��غ���

using namespace std;

//���� ���̶� �� ���� ���ļ� �� ũ���̸� ��ü Ž�� �Ϸ� -> ���� ����
// �� �ʹ� ����̸� .. -1 ����..
//



int N, M; //���� ���̰� M�̰� ���α��̰� N -> map
int tomato[100][100];
int path[100][100];
bool visited[100][100] = { false };
int dx[4] = { 1, -1,0,0 };
int dy[4] = { 0,0,-1,1 };
int days = 0;
queue<pair<int, int>> q;


void BFS(int y, int x) {
	path[y][x] = 1;
	visited[y][x] = true;
	q.push({ y,x });

	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue; //������ �Ѿ�� Ž�� ���ϰ� �Ѿ
			if (tomato[ny][nx] == -1)continue;
			if (tomato[ny][nx] == 0 && visited[ny][nx] == 0) {
				visited[ny][nx] = true;
				q.push({ ny,nx });
				days++;
			}
		}
	}
}

int main() {
	cin >> N >> M;
	int st_y, st_x;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			cin >> tomato[y][x];
			if (tomato[y][x] == 1) {
				st_y = y;
				st_x = x;
			}
		}
	}
	BFS(st_y,st_x);
	for (int i = 0; i < N; i ++ ) {
		for (int j = 0; j < M; j++) {
			if (visited[i][j] == 0) {
				cout << -1;
				return 0;
			}
			else cout << days;
		}
	}
}