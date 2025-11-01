#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,l;
    cin>>i>>l;
    int n;
    cin>>n;
    set<int>pos;
    multiset<int>dist;
    pos.insert(0);
    pos.insert(l);
    dist.insert(l);
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        auto it=pos.lower_bound(q);
        auto it2=pos.upper_bound(q);
        int left=*it;
        int right=*it2;
        int d=right-left;
        dist.erase(dist.lower_bound(d));
        dist.insert(q-left);
        dist.insert(right-q);
        cout<<"max dis:"<<*dist.rbegin()<<endl;
    }

    return 0;
}