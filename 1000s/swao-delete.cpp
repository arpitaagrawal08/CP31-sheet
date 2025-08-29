#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zero=0,one=0;
        for(char ch:s){
            if(ch=='1')one++;
            else zero++;
        }
        int len=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'&&zero>0)
            {zero--;len++;}
           else if(s[i]=='0'&&one>0){one--;len++;}
            else break;
        }
        cout<<s.size()-len<<endl;
        
    }
    return 0;
}