#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
       int ca=0,cb=0;
       while(a%2==0){
        ca++;
        a/=2;
       }
        while(b%2==0){
        cb++;
        b/=2;
       }
      if(a!=b){
        cout<<"-1"<<endl;
        continue;
      }
       long long val=llabs(ca-cb);
       long long cnt=0;
        
            cnt+=val/3;
            val%=3;
            
        
            cnt+=val/2;
            val%=2;
           
        
       
            cnt+=val;
            
            
        
       
    cout<<cnt<<endl;
            
        
     
        
}
    return 0;
}