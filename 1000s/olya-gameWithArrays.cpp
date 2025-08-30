#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int lowest=INT_MAX;
        vector<int>seconds;
        for(int i=0;i<n;i++){
             int m;
        cin>>m;
        vector<int>a(m);

        for(int j=0;j<m;j++){
            cin>>a[j];

        }
        sort(a.begin(),a.end());
        lowest=min(lowest,a[0]);
        seconds.push_back(a[1]);


        }
        sort(seconds.begin(),seconds.end());
        int sec=seconds[0];
        int sum=accumulate(seconds.begin(),seconds.end(),0);
        int ans=lowest+sum-sec;
        cout<<ans<<endl;
       
    }
    return 0;
}