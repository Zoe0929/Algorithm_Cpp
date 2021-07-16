#include<iostream>
#include<queue>
using namespace std;

int T, M, N, K;
int dy[] = {-1,1,0,0 }; //좌우상하 순
int dx[] = { 0,0,-1,1 };
bool visited[50][50] = { false };
int G[50][50];


void DFS(int G[50][50], int y1, int x1) {
	for (int i = 0; i < 4; i++) {
		int ny = y1 + dy[i];
		int nx = x1 + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= M) {
			continue;
		}
		if (G[ny][nx] && !visited[ny][nx]) {
			visited[ny][nx] = true;
			DFS(G, ny, nx);
		}
	}
}


int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		int X, Y;
		G[50][50] = { 0 };
		visited[50][50] = { false };
		cin >> M >> N >> K;
		for (int k = 0; k < K; k++) {
			cin >> X >> Y;
			G[Y][X] = 1;
		}
		int count = 0;
		for (int cy = 0; cy < N; cy++) {
			for (int cx = 0; cx < M; cx++) {
				if (G[cy][cx] == 1 && !visited[cy][cx]) {
					count++;
					visited[cy][cx]=true;
					DFS(G,cy, cx);
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}