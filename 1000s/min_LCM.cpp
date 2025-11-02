#include <bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=1,b=n-1;
        int l=(a*b)/__gcd(a,b);
        int a1=a,b1=b;
        while(a<n-1&&b>1){
            a++;
            b--;
            //find there lcm
            int new_lcm= (a*b)/__gcd(a,b);
            if(new_lcm<l){
                l=new_lcm;
                a1=a;
                b1=b;
            }
        }
        cout<<a1<<" "<<b1<<endl;
    }
    return 0;
}   