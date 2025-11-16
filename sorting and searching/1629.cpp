#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end(),[&](pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second){
            return a.first < b.first;
        }
        return a.second < b.second;
    });
    int ans = 0;
    int prev_end = -1;
    for(int i=0;i<n;i++){
        if(arr[i].first >= prev_end){
            ans++;
            prev_end = arr[i].second;
        }
    }
    cout<<ans<<"\n";
}
 
signed main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
