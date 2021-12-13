#include <vector>
#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool IsPrime(int n){
    if (n==1) return false;
    if(n==2 || n==3) return true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> sums;
    for (int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                sums.push_back(i+j+k);
            }
        }
        for(int n=0;n<sums.size();n++){
            if(IsPrime(n)==true) answer++;
        }
    }
    return answer;
}