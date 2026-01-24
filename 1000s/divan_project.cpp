#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        
        //output-> headquat& then other buildings..
        vector<int>ans(n+1,0);
        vector<pair<int,int>>store;
        for(int i=0;i<n;i++)
            store.push_back({a[i],i});
        sort(store.rbegin(),store.rend());


        long long val=1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[1+store[i].second]=val;
            }
            else {
                ans[store[i].second+1]=-val;
            val++;
            }
        }
        //distance nikalo
        long long dis = 0;
        for (int i = 0; i < n; i++) {
            dis += 2LL * a[i] * llabs(ans[i + 1]);
        }
        cout<<dis<<endl;
        for(int i=0;i<n+1;i++)cout<<ans[i]<<" ";
        cout<<endl;

    }
    return 0;
}