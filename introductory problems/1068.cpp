#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n&1){
            n = (n*3)+1;
        }
        else{
            n /= 2;
        }
        cout<<n<<" ";
    }
    cout<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}