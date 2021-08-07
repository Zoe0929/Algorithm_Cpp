#include<iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long current_price = 0;
    if (price >= 1 && price <= 2500 && money >= 1 && money <= 1000000000 && count >= 1 && count <= 2500)//범위 체크 
    {
        for (int i = 1; i <= count; i++) {
            current_price += i * price;
        }
        
    }
    if (current_price > money)
        answer = current_price - money;
    else
        answer = 0;
    return answer;
}