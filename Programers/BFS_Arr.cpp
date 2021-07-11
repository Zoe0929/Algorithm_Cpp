#include<iostream>
#include<queue>

using namespace std;

int N, M; //���� ���̰� M�̰� ���α��̰� N -> map
int map[101][101] = { 0 };
int path[101][101];
bool visited[101][101] = { false };
int dx[4] = { 1. - 1.0,0 };
int dy[4] = { 0,0,-1,1 };
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
			if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
				visited[ny][nx] = true;
				q.push({ ny,nx });
				path[ny][nx]++; //���� ���������� ǥ�� 
			}

		}
	}
}