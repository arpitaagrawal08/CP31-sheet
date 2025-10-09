#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k,q;
        cin>>n>>k>>q;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
           arr[i] = (arr[i] > q) ? 0 : 1;
        }
       
        long long cnt=0;
        long long ans=0;
  for(long long i=0;i<n;i++){
    if(arr[i]==1)cnt++;
    else{
        if(cnt>=k){
            long long diff=cnt-k+1;
            ans+=(diff*(diff+1))/2;
        }
        cnt=0;
    }
  }
  if(cnt>=k){
            long long diff=cnt-k+1;
            ans+=(diff*(diff+1))/2;
        }
    cout<<ans<<endl;
    }
    return 0;
}