#include <bits/stdc++.h>
using namespace std;
void prefix(vector<int>&pre, int i, string s){
unordered_map<char, int>freq;
for(int j=0;j<=i;j++){
    freq[s[j]]++;
}
pre[i]=freq.size();
}

void suffix(vector<int>&suf, int i, string s){
    unordered_map<char, int>freq;
for(int j=i+1;j<s.size();j++){
    freq[s[j]]++;
}
suf[i]=freq.size();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>pre(n+1,0),suf(n+1,0);
        for(int i=0;i<n-1;i++){
            prefix(pre,i,s);
            suffix(suf,i,s);

        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,pre[i]+suf[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}