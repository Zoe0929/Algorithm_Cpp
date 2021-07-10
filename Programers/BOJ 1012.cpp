#include<iostream>
#include<queue>

using namespace std;

int T, M, N, K;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void BFS(int G[50][50], int x1, int y1) {
	queue<pair<int,int>> q;
	q.push({ x1,y1 });

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= N || nx<0 || ny>=N || ny < 0) continue;
			if (G[nx][ny] == 0) continue;
			if (G[nx][ny] == 1) {
				G[nx][ny] = 0;
				q.push({ nx,ny });
			}
		}
	}
}


int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		int X, Y;
		int G[50][50] = { 0 };
		cin >> M >> N >> K;
		for (int k = 0; k < K; k++) {
			cin >> X >> Y;
			G[X][Y] = 1;
		}
		int count = 0;
		for (int cx = 0; cx < M; cx++) {
			for (int cy = 0; cy < N; cy++) {
				if (G[cx][cy] == 0) continue;
				else  {
					BFS(G, cx, cy);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}