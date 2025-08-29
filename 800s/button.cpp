#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0)
        {
            if(c/2+b>=c/2+a)cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        if(c%2==1){
            if(c/2+1+a>c/2+b)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }

    }
    return 0;
}