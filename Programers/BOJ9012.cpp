#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        bool b=true;
        cin>>str;
        for(int i=0;i<str.size();i++){
            stack<char> s;
            if(str[i]=='('){
                s.push(str[i]);
            }
            else s.pop();
        }
        if(s.size()==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}