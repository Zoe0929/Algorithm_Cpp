#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t=0;
    int n=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        string pn;
        vector<string> p_num;
        for(int j=0;j<n;j++){
            cin>>pn;
            p_num.push_back(pn);
        }
        sort(p_num.begin(),p_num.end());
        // for(int i=0;i<n;i++){
        //     cout<<p_num[i]<<endl;
        // }
        bool answer = true;
        for (int i = 0; i < p_num.size() - 1; i++)
        {
            if ((p_num[i] == p_num[i + 1].substr(0, p_num[i].size())) && (p_num[i].size() != p_num[i+1].size()))
                answer=false;
        }

        if(answer==true) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}