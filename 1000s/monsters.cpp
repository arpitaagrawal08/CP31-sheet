#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<long long, long long>>nums(n);
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            nums[i]={x,i+1};
        }

        for(int i=0;i<n;i++){
            nums[i].first=nums[i].first%k;
            if(nums[i].first%k==0)nums[i].first=k;
        }

        //sort in decending order
        sort(nums.begin(),nums.end(),[&](pair<long long, long long>a, pair<long long,long long>b){
           if(a.first!=b.first) return a.first>b.first;
           return a.second<b.second;
        });

        for(int i=0;i<n;i++){
            cout<<nums[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}