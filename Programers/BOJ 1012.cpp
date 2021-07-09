#include<iostream>
#include<queue>
#include<vector>

using namespace std;
const int MAZE_SIZE = 50;


class Location2D {
public:int row, col;
	Location2D(int r = 0, int c = 0) { row = r; col = c; }
	bool isNeighbor(Location2D& p) {
		return ((row == p.row && (col == p.row - 1 || col == p.col + 1)))
			|| (col == p.col && (row == p.row - 1 || row == p.row + 1));
	}
	bool operator ==(Location2D& p) { return row == p.row && col == p.col; }
};
int main() {
	int T;
	int M, N,K;
	int X, Y;
	vector<int> Location[5M] = { {0 },{0 } };
	cin >> T;
	cin >> M >> N >> K;
	for (int i = 0; i < T; i++) {//테스크갯수만큼 반복 
		for (int j = 0; j < K; j++) {//배추의 갯수만큼 위치 입력받기
			cin >> X >> Y;
			Location[X][Y] = 1;
			
		}
	}

}