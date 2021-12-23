#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    unique(arr.begin(),arr.end());
    return answer;
}

int main(){
    vector<int> arr={1,1,3,3,0,1,1};
    solution(arr);
}