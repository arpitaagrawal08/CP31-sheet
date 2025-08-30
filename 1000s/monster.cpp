#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<pair<long long,int>> b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            long long hits = (a[i] + k - 1) / k;  // ceil(a[i] / k)
            b.push_back({hits, i + 1});
        }
        sort(b.begin(), b.end(), [&](auto &x, auto &y) {
            if (x.first == y.first) return x.second < y.second;
            return x.first > y.first;  // higher hits survive longer
        });
        for (auto &it : b) cout << it.second << " ";
        cout << "\n";
    }
    return 0;
}
