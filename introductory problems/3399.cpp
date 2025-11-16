#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int ties = n-a-b;
    n -= ties;
    if(ties < 0 || n < 0 ){
        cout<<"NO\n";
        return;
    }
    if(n>=1 && (a==n || b==n)){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    for(int i=n+1;i<=n+ties;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++){
        int x = i+a;
        if(x>n){
            x-=n;
        }
        cout<<x<<" ";
    }
    for(int i=n+1;i<=n+ties;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}