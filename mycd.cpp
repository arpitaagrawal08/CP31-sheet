#include <bits/stdc++.h>
using namespace std;
int f(vector<int>&arr,vector<int>&dep){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=0,j=0;

    int maxi=0;
    int plat_needed=0;
    while(i<n){
        if(arr[i]<=dep[j]){
            plat_needed++;
            maxi=max(maxi,plat_needed);
            i++;
        }
        else{
            plat_needed--;
            j++;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={1,4,6,7,11};
    vector<int>dep={3,8,7,15,13};
    cout<<f(arr,dep);
    return 0;
}