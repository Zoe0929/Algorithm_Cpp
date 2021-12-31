#include <string>
#include <vector>
#include<algorithm>
#include<math.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> temp;
    while (n>=1)
    {
        temp.push_back(n%10);
        n/=10;
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        answer+=pow(temp[i]*10,i);
    }
    
    return answer;
}
int main(){
    solution(118372);
}