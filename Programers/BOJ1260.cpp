#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;




void dfs(int x,vector<int> graph[],bool visited[]) {

	visited[x] = true;
	cout << x << ' ';
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) dfs(y,graph,visited); //����Լ�, �湮���� �ʾҴٸ� �湮,DFS ����
	}
}

void bfs(int start,vector<int> graph[],bool visited[]) {
	queue<int> q;
	
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
}


int main() {
	int N, M, V;
	int tmp1,tmp2;
	cin >> N >> M >> V;
	bool visited[1001] = { false };
	vector<int>* graph = new vector<int>[N + 1];
	for (int i = 0; i < M; i++) {
		cin >> tmp1>>tmp2;
		graph[tmp1].push_back(tmp2);
		graph[tmp2].push_back(tmp1);
	}

	for (int i = 1; i <= N; i++) sort(graph[i].begin(), graph[i].end());
	dfs(V, graph, visited);
	cout << endl;
	fill(visited, visited + N + 1, false);
	bfs(V, graph, visited);

	return 0;
}