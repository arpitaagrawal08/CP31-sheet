#include <bits/stdc++.h>
using namespace std;
bool v(long long n){
    long long num=n;
    while(num){
        long long dig=num%10;
        
        if(dig!=0&&n%dig!=0)return false;
        num/=10;
    }
    return true;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(!v(n)){
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}