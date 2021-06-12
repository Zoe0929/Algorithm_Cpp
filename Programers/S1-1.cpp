#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int n = 0; n < commands.size(); n++) {
        vector<int> temp;
        for (int i=commands[n][0]-1; i<commands[n][1];i++)
            temp.push_back(array[i]);
        int t = 0;
        for (int x = 0; x < temp.size(); x++) {
            for (int y = 0; y < temp.size() - x - 1; y++) {
                if (temp[y] > temp[y + 1]) {
                    t = temp[y];
                    temp[y] = temp[y + 1];
                    temp[y + 1] = t;
                }
            }
        }
        answer.push_back(temp[commands[n][2] - 1]);

    }
    return answer;
}

