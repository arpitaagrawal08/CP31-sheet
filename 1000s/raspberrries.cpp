#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int even=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0)even++;
            if(a[i]%k==0)ans=0;
            ans=min(ans,k-a[i]%k);
        }
        if(k==4){
            if(even>1)ans=min(ans,0);
            if(even==1)ans=min(ans,1);
            if(even==0)ans=min(ans,2);
        }
        cout<<ans<<endl;
    }
    return 0;
}