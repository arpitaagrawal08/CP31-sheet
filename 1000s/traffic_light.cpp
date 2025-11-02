#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        vector<int>red,green,yel;
        for(int i=0;i<s.size();i++){
            if(s[i]=='r')red.push_back(i);
            if(s[i]=='g')green.push_back(i);
            else if(s[i]=='y')yel.push_back(i);
        }
        int ans=0;
        if(c=='r'){
            for(auto i:red){
                auto pointer=upper_bound(green.begin(),green.end(),i);
                if(pointer!=green.end())ans=max(ans,*pointer-i);
                else ans=max(ans,n-i+green[0]);
            }
            cout<<ans<<endl;
        }else if(c=='y'){
            for(auto i:yel){
                auto pointer=upper_bound(green.begin(),green.end(),i);
                if(pointer!=green.end())ans=max(ans,*pointer-i);
                else ans=max(ans,n-i+green[0]);
            }
            cout<<ans<<endl;
        }
        else if(c=='g')cout<<0<<endl;

    }
    return 0;
}