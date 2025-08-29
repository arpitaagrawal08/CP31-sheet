#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, p;
        cin >> n >> p;
        vector<long long> a(n), b(n);
        for(long long i = 0; i < n; i++) cin >> a[i];
        for(long long i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long,long long>> v(n); 
        for(long long i = 0; i < n; i++){
            v.push_back({b[i], a[i]}); 
        }

        long long ans = p; 
        long long people = 1;

        sort(v.begin(), v.end());

        for(auto it : v){
            int cost = it.first;
            int can_share = it.second;

            if(cost >= p) break;
            if(people >= n) break;

            if(people + can_share > n){
                ans += (n - people) * cost;
                people = n;
                break;
            }
            else{
                ans += can_share * cost;
                people += can_share;
            }
        }

    ans += (n - people) * p;

        cout << ans << endl;
    }
    return 0;
}
