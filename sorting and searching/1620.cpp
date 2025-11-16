#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,t;
    cin>>n>>t;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l = 0 , r = LLONG_MAX;
    int ans = LLONG_MAX;
    while(l<=r){
        int time = (l+r)/2;
        int prod = 0;
        for(int i=0;i<n;i++){
            prod += (time/arr[i]);
            if(prod>=t){
                break;
            }
        }
        if(prod>=t){
            ans = min(ans,time);
            r = time-1;
        }
        else{
            l = time+1;
        }
    }
    cout<<ans<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}