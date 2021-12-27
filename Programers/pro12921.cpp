#include <string>
#include <vector>
#include<math.h>
using namespace std;

bool IsPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2; i<=(int)sqrt(n);i++){
        if(n%i==0) return false;
    } 
    return true;
}

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++){
        if(IsPrime(i)){
            answer++;
        }
    }
    return answer;
}

int main(){
    solution(10);
}