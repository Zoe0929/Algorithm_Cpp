#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<vector>


bool IsPrime(int num){
    bool N;
    for(int i=2;i<num;i++){
        if(num%i==0){
            N=false;
            break;
        }
        else N=true;
    }
    return N;
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = -1;
    vector<int> sum;
    int temp=0;
    for(int i=0;i<nums_len;i++){
        for(int j=1;j<nums_len;j++){
            for(int k=2;k<nums_len;k++)
            sum.push_back(nums[i]+nums[j]+nums[k]);
        }
    }
    unique(sum.begin(),sum.end());
    for(int i=0;i<sum.length();i++){
        if(IsPrime(sum[i]) answer++;
    }
    
    return answer;
}

//알고리즘 : 배열 하나에 3개의 숫자를 더한 경우의 수를 모두 저장하고, 저장된 값 중에 소수인 것 count++