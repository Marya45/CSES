#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(3));
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr[i] = {x,y,i};
    }
    vector<pair<int,int>> ans(n,{0,0});
    sort(arr.begin(),arr.end(),[&](vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1] > b[1];
        }
        else{
            return a[0] < b[0];
        }
    });
    // ans[i] = {if it contains other range , if some other range contains it}
    int mn_r = 1e9+7;
    // check if there is any r less than curr 
    for(int i=n-1;i>=0;i--){
        if(arr[i][1] >= mn_r){
            ans[arr[i][2]].first = 1;
        }
        mn_r = min(mn_r,arr[i][1]);
    }

    int mx_r = 0;
    for(int i=0;i<n;i++){
        if(arr[i][1] <= mx_r){
            ans[arr[i][2]].second = 1;
        }
        mx_r = max(mx_r,arr[i][1]);
    }

    for(int i=0;i<2*n;i++){
        if(i<n){
            cout<<ans[i].first<<" ";
        }
        else{
            cout<<ans[(i%n)].second<<" ";
        }
        if(i==n-1){
            cout<<"\n";
        }
    }

}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}