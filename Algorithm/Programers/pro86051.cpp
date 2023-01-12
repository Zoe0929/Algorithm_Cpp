#include <string>
#include <vector>
#include<algorithm>

using namespace std;



int solution(vector<int> numbers)
{
    sort(numbers.begin(),numbers.end());
    int answer = 0;
    for (int i=1;i<10;i++){
        if(*(find(numbers.begin(),numbers.end(),i))!=i){
            answer+=i;
        }
    }
    return answer;
}