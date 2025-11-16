#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void print(int n){
    int total = n*n*(n*n-1)/2;
    int attack = 4*(n-1)*(n-2);
    cout<<total-attack<<"\n";
}

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        print(i);
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