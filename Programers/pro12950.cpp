#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    answer=arr1;
    for(int y=0;y<answer.size();y++){
        for(int x=0;x<answer[y].size();x++){
            answer[y][x]+=arr2[y][x];
             }
    }
    return answer;
}