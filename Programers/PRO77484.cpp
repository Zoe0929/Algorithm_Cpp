#include <string>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt=0, cnt_b=0;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(),win_nums.end());
    for(int i=0;i<lottos.size();i++){
        if(lottos[i]==0){
            cnt_b++;
            break;
        }
        for(int j=0;j<win_nums.size();j++){
            if(lottos[i]==win_nums[j]) {
                cnt++;
                break;
                }
        }
    }
    if(cnt>=cnt_b)
        cnt_b+=cnt;
    else 
        cnt=cnt_b;
    if(cnt_b>5){
        answer.push_back(1);
    }
    else if(cnt_b==5){
        answer.push_back(2);
    }
    else if(cnt_b==4){
        answer.push_back(3);
    }
    else if(cnt_b==3){
        answer.push_back(4);
    }
    else if (cnt_b==2){
        answer.push_back(5);
    }
    else answer.push_back(6);

    if(cnt==6){
        answer.push_back(1);
    }
    else if(cnt==5){
        answer.push_back(2);
    }

    else if(cnt==4){
        answer.push_back(3);
    }
    else if(cnt==3){
        answer.push_back(4);
    }
    else if (cnt==2){
        answer.push_back(5);
    }
    else answer.push_back(6);


    return answer;
}