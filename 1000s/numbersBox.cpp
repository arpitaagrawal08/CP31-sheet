#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        vector<vector<long long>>grid(n,vector<long long>(m));
        bool zero=false;
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>grid[i][j];
                if(grid[i][j]==0)zero=true;
            }
        }
        long long sum=0,neg=0;
        long long mini=LLONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=abs(grid[i][j]);
                mini=min(mini,abs(grid[i][j]));
                if(grid[i][j]<0)neg++;
            }
        }
        if(zero){
            cout<<sum<<endl;
            continue;
        }
        
        if(neg%2==0)cout<<sum<<endl;
        else if(neg%2==1)cout<<sum-(2*mini)<<endl;
    }
    return 0;
}