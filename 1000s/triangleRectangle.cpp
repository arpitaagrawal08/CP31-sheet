#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        
        long long ans=0;
        
        for(int i=0;i<4;i++){
            long long k;
            cin>>k;
            long long mini,maxi;
            for(long long j=0;j<k;j++){
                long long x;
                cin>>x;
                if(j==0)mini=x;
                if(j==k-1)maxi=x;

            }
           long long max_base=0;
           max_base=max(maxi-mini,max_base);
           long long height;
           if(i<=1)height=h;
           else height=w;
            ans=max(ans,height*max_base);
        }
        cout<<ans<<endl;
    }
    return 0;
}