#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        stack<char> s;
        cin>>str;
        for(int i=0;i<str.size();i++){
            
            if(str[i]=='('){
                s.push(str[i]);
            }
            else if(!s.empty()) s.pop();
        }
        if(s.size()==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}