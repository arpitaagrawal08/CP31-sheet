#include <bits/stdc++.h>
using namespace std;
long long f(long long need, long long gain){
    return (need+gain-1)/gain;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long cnt=0;
        long long need=(k-1)+(k*y);
        long long gain=x-1;
        cnt+=k;
        cnt+=f(need,gain);
        cout<<cnt<<endl;
    }
    return 0;
}