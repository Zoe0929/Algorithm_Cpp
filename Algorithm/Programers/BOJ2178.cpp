#include<iostream>
#include<stack>
#include<queue>
#include<string>

using namespace std;

int N, M; //가로 길이가 M이고 세로길이가 N -> map
int map[100][100] = { 0 };
int path[100][100];
bool visited[100][100] = { false };
int dx[4] = { 1, - 1,0,0 };
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

			if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue; //범위를 넘어가면 탐색 안하고 넘어감
			if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
				visited[ny][nx] = true;
				q.push({ ny,nx });
				path[ny][nx]=path[y][x]+1; //길을 지나갔음을 표시 
			}

		}
	}
}


int main() {
	cin >> N >> M;

	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < M; j++)
			map[i][j] = str[j]-'0';
	}
	BFS(0, 0);
	cout << path[N - 1][M - 1];
}