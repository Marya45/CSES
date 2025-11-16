#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    int sum = n*(n+1)/2;
    int curr_sum = 0;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        curr_sum += x;
    }
    cout<<sum-curr_sum<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}