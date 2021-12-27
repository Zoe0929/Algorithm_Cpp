#include<vector>
#include<math.h>
using namespace std;

int soultion(int n){
    int answer=0;
    int vec[10000000]={0};
    for(int i=2;i<=n;i++){
        if(vec[i]==0){
            answer++;
            for(int j=1;i*j<=n;j++){
                vec[i*j]=1;
            }
        }
    }
    return answer;
}