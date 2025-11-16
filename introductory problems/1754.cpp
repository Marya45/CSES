#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int a,b;
    cin>>a>>b;
    // x + 2y = a
    // 2x + y = b
    // (a + b )%3 = 0 
    if(max(a,b) - 2*min(a,b) > 0 || (a+b)%3!=0 ){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}