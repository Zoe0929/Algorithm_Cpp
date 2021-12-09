#include<iostream>
#include <string>
#include <vector>

using namespace std;
int L=10, R=11;
int L_x;
int R_x;
int L_y;
int R_y;

vector< vector<int> > keypad={{1,2,3},{4,5,6},{7,8,9},{10,0,11}};

void find(){
    for(int y=0;y<4;y++){
        for(int x=0;x<3;x++){
            if(L==keypad[y][x]){
                L_x=x;
                L_y=y;
            }
            if(R==keypad[y][x]){
                R_x=x;
                R_y=y;
            }
        }
    }
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    for(int i=0;i<numbers.size();i++){
        find();
        if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7){
            answer+='L';
            L=numbers[i];
        }
        else if(numbers[i]==3||numbers[i]==6||numbers[i]==9){
            answer+='R';
            R=numbers[i];
        }
        else{
            for(int y=0;y<4;y++){
                for(int x=0;x<3;x++){
                    if(numbers[i]==keypad[y][x]){
                        int R_dis= abs(R_x-x)+abs(R_y-y);
                        int L_dis= abs(L_x-x)+abs(L_y-y);
                        if(R_dis>L_dis){
                            answer+='L';
                            L=numbers[i];
                        }
                        else if (R_dis<L_dis){
                            answer+='R';
                            R=numbers[i];
                        }
                        else {
                            if(hand=="left"){
                                answer+='L';
                                L=numbers[i];
                            }
                            else if(hand=="right"){
                                answer+='R';
                                R=numbers[i];
                            }
                        }
                    }
                }
            }

        }
    }
    return answer;
}

int main() {
    string hand="right";
    vector<int> numbers={1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
    string answer=solution(numbers,hand);
    cout<<answer<<endl;

}