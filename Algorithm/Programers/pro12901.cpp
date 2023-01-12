#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> week={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    vector<int> day={31,29,31,30,31,30,31,31,30,31,30,31};
    int m=0, d=0, w=0;
    for(int i=0;i<a-1;i++){
        m+=day[i];
    }
    d=m+b;
    w=d%7;
    answer=week[w];
    return answer;
}

int main(){
    cout<<solution(2,29);
}