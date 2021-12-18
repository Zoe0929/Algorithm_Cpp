#include <string>
#include <vector>
#include<iostream>
#include<math.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while(n>0){
        v.push_back(n%3);
        n/=3;
        if(n==1) v.push_back(1);
    }
    for(int i=0;i<v.size();i++){
        answer+=pow(3,(v.size()-i-1))*v[i];
    }
    return answer;
}

int main() {
    int n=125;
    cout<<solution(n);
}