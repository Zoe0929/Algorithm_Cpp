#include <string>
#include <vector>

using namespace std;

int GCD(int a,int b){
    while(1){
        int r = a%b;
        if(r==0) return b;
		
        a = b;
        b = r;
    }
}

int lcm(int a, int b){
    return a * b / GCD(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(GCD(n,m));
    answer.push_back(lcm(n,m));
    return answer;
}