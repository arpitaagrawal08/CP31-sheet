#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        unordered_map<int,int>cnt;
        for(auto it:arr)cnt[it]++;
        bool flag=false;
        for(auto it:cnt)if(it.second==1){
        flag=1;
        break;
        }
        if(flag){
            cout<<"-1"<<endl;
            continue;
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)ans[i]=i+1;

        int l=0,r=0;
        while(r<n){
            if(arr[r]==arr[l])r++;
            else{
                rotate(ans.begin()+l,ans.begin()+1+l,ans.begin()+r);
                l=r;
            }
        }
        //rotate last
        rotate(ans.begin()+l,ans.begin()+l+1,ans.end());
        for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}