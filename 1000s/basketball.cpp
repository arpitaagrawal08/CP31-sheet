#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>pow(n);
    for(int i=0;i<n;i++)cin>>pow[i];
    sort(pow.begin(),pow.end());
    int l=-1,r=n-1,cnt=0,team=1;
    while(l<r){
        //cant win
        if(pow[r]*team<=d&&l<r){
            l++;
            team++;
        }
        else{
            //can win
            cnt++;
            r--;
            team=1;
            
        }
    }
    cout<<cnt;
    return 0;
}