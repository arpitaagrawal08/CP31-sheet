#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        int ans=INT_MAX;

       vector<int>prefix(n+1,0);
       for(int i=0;i<n;i++){
        if(s[i]=='W')prefix[i+1]+=(prefix[i]+1);
        else prefix[i+1]+=(prefix[i]);

       }
       for(int i=0;i<=n-k;i++){
        int diff=prefix[i+k]-prefix[i];
        ans=min(ans,diff);
       }
        cout<<ans<<endl;

    }
    return 0;
}