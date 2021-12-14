#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t=0;
    int n=0;
    string pn;
    vector<string> p_num;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>pn;
            p_num.push_back(pn);
        }
        sort(p_num.begin(),p_num.end());
        for(int l=1;l<n;l++){
            for(int k=0;k<p_num[l].size();k++){
                if(p_num[l-1][k]==p_num[l][k]) {
                    printf("NO\n"); 
                    break;
                }
            }
        }
        printf("YES\n");
    }
    return 0;
}