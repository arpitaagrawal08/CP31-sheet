#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int,int> freq;
        for (int x : a) freq[x]++;

        if (freq.size() == 1) {
            cout << "Yes\n";                    // all equal
        } 
        else if (freq.size() == 2) {
            auto it = freq.begin();
            int f1 = it->second; 
            ++it;
            int f2 = it->second;

            if (n % 2 == 0) 
                cout << (f1 == f2 ? "Yes\n" : "No\n");   // n even -> n/2, n/2
            else 
                cout << (abs(f1 - f2) == 1 ? "Yes\n" : "No\n"); // n odd -> counts differ by 1
        } 
        else {
            cout << "No\n";                     // more than 2 distinct values
        }
    }
    return 0;
}
