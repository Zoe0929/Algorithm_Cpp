#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    stack<int> bascket;

    for (int i = 0; i < moves.size(); i++)
    {
        int x = moves[i] - 1;
        for (int y = 0; y < board.size(); y++)
        {
            if (board[y][x] != 0)
            {
                if (!bascket.empty() && bascket.top() == board[y][x])
                {
                    answer += 2;
                    bascket.pop();
                }
                else
                    bascket.push(board[y][x]);
                board[y][x] = 0;
                break;
            }
        }
    }

    return answer;
}

int main(){
    vector<vector<int>> boards = { { 0, 0, 0, 0, 0 }, { 0, 0, 1, 0, 3 }, { 0, 2, 5, 0, 1 }, { 4, 2, 4, 4, 2 }, { 3, 5, 1, 3, 1 }};
    vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
    cout<<solution(boards,moves)<<endl;
}