#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>dup=arr;
        sort(dup.begin(),dup.end());
        if(dup==arr||k>1) cout<<"yes"<<endl;
        else{
            cout<<"no"<<endl;
            
        }

    }
    return 0;
}