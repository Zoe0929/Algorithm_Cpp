#include <string>
#include <vector>

using namespace std;

int dis(int n1,int n2){
    if(n1>n2) return(n1-n2)/2;
    else return (n2-n1)/2;
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    char L='#', R='*';
    for(int i=0;i<numbers.size();i++){
        if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7){
            answer+='L';
            L=numbers[i]+48;
        }
        else if(numbers[i]==3||numbers[i]==6||numbers[i]==9){
            answer+='R';
            R=numbers[i]+48;
        }
        else{
            if(dis(numbers[i],L-48)>dis(numbers[i],R-48)){
                answer+='R';
                R=numbers[i]+48;
            }
            else if(dis(numbers[i],L-48)<dis(numbers[i],R-48)){
                answer+='L';
                L=numbers[i]+48;
            }
            else {
                if(hand=="right"){
                    answer+='R';
                    R=numbers[i]+48;
                }
                else if(hand=="left"){
                    answer+='L';
                    L=numbers[i]+48;
                }
            }
            
        }
    }
    return answer;
}