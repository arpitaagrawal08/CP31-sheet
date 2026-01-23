#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int cnt=INT_MAX;
        
        for(int i=0;i<=32;i++){
            int op=i;
            int b1=b+i;
            if(b1==1)continue;
            int new_a=a;
            while(new_a>0){
                new_a/=b1;
                op++;
            }
            cnt=min(cnt,op);
        }
        cout<<cnt<<endl;
    }
    return 0;
}