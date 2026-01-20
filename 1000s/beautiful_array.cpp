#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long mini=b*k;
        long long maxi=(b*k)+(k-1)*n;
        if(s<mini||s>maxi){
            cout<<"-1"<<endl;
        }
        else{
            vector<long long>arr(n,0);
            arr[0]=mini;
            s-=mini;
            for(long long i=0;i<n;i++){
                arr[i]+=min(s,k-1);
                s-=min(k-1,s);

            }
            for(long long i=0;i<n;i++)cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}