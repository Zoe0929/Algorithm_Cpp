#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    for(int i=0;i<sizes.size();i++){
        sort(sizes[i].begin(),sizes[i].end());
    }
    sort(sizes.begin(),sizes.end());
    int w= sizes[sizes.size()-1][0];
    int h=0;
    for(int i=0;i<sizes.size();i++){
        if(h<sizes[i][1]) h=sizes[i][1];
    }
    return w*h;
}
int main(){
    vector<vector<int>> sizes={{60, 50}, {30, 70},{60, 30}, {80, 40}};
    cout<<solution(sizes);
}