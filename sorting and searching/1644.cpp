#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
    int ans = LLONG_MIN;
    multiset<int> mt;

    for(int i=a;i<=n;i++){
        if(i>b){
            mt.erase(mt.find(arr[i-b-1]));
        }
        mt.insert(arr[i-a]);
        ans = max(ans,arr[i]-*mt.begin());
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