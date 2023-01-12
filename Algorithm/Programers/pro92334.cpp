#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    answer={0,id_list.size()};
    for(int i=0;i<report.size();i++){
        for(int j=0;j<id_list.size();j++){
            if(report[i][id_list[j].size()]==' '){
                if(report[i][id_list[j].size()+1]==id_list[j+1]) answer[j+1]++;
            }
        }
    }
    return answer;
}