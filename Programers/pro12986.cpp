#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(),d.end());
    for(int n=0;n<d.size();n++){
        budget-=d[n];
        if(budget<0) break;
        answer++;
    }
    return answer;
}