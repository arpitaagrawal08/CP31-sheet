#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
       cin>>s;
        int ans=0;
        int cnt=0;
        for(char ch:s){
            
            if(ch=='.'){
                cnt++;
                ans++;
                if(cnt==3){
                ans=2;
                break;
            }
            }
            else cnt=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}