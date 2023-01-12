//BFS: 너비 우선 탐색 , 큐 활용 구현

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

bool visited[9];
vector<int> graph[9];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << endl;
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
}