#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;


int bfs(int start, vector<int> graph[], bool visited[]) {
	queue<int> q;
	int count = -1;
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		count++;
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
	return count;
}

int main() {
	int Com,N;
	cin >> Com >> N;

	bool visited[101] = { false };
	vector<int>* graph = new vector<int>[Com + 1];


	int tmp1, tmp2;
	
	for (int i = 0; i < N; i++) {
		cin >> tmp1 >> tmp2;
		graph[tmp1].push_back(tmp2);
		graph[tmp2].push_back(tmp1);
	}

	for (int i = 1; i <= Com; i++) sort(graph[i].begin(), graph[i].end());


	cout<<bfs(1, graph, visited);

	return 0;
}