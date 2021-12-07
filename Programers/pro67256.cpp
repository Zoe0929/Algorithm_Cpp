#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    char L='#', R='*';
    for(int i=0;i<numbers.size();i++){
        if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7){
            answer+='L';
        }
        else if(numbers[i]==3||numbers[i]==6||numbers[i]==9){
            answer+='R';
        }
        else{
            
        }
    }
    return answer;
}