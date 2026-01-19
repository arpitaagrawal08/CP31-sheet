#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mpp;
        
        int a=0,b=0;

        for(int i=0;i<n;i++){
            if(mpp.find(s[i])!=mpp.end()){
                a=i;
                //baki bcha hua in b;
                
            }
            mpp[s[i]]++;
        }
        cout<<a+b<<endl;
    }
    return 0;
}