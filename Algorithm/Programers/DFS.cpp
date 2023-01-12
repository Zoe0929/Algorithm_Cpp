//DFS : 깊이 우선 탐색 -> 재귀함수 이용

#include<iostream>
#include<vector>
using namespace std;

bool visited[9];
vector<int> graph[9];


void dfs(int x) {
	visited[x] = true;
	cout << x << ' ';
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) dfs(y); //재귀함수, 방문하지 않았다면 방문,DFS 실행
	}
}
