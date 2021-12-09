#include <string>
#include <vector>
#include<algorithm>
#include<stdlib.h>
#include<stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    vector<int> bascket;

    for(int y=0;y<board.size();y++){
        for(int x=0;x<board[y].size();x++){
            bascket.push_back(board[y][x]);
            if(bascket.size()>2){
                for(int i=0;i<bascket.size();i++){
                    if(bascket[i]==bascket[i-1]){
                        answer+=2;
                        bascket.pop_back();
                        bascket.pop_back();
                    }
                }
            }
        }
    }
    return answer;
}