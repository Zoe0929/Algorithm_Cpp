#include <string>
#include <vector>
#include<math.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int n1=sqrt(n);
    if(n1-sqrt(n)==0) return pow(n1+1,2);
    else  return -1;
}