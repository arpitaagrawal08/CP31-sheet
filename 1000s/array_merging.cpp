#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        unordered_map<int,int>f1,f2;
       int cur = 1;
        f1[a[0]] = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) cur++;
            else cur = 1;
            f1[a[i]] = max(f1[a[i]], cur);
        }

        cur = 1;
        f2[b[0]] = 1;
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) cur++;
            else cur = 1;
            f2[b[i]] = max(f2[b[i]], cur);
        }
       int maxi=0;
       for(auto it:f1)maxi=max(maxi,it.second);
       for(auto it:f2)maxi=max(maxi,it.second);
       for(auto it:f1){
        maxi=max(maxi,it.second+f2[it.first]);
       }
        cout<<maxi<<endl;
    }
    return 0;
}