#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    if(n==4){
        cout<<"2 4 1 3\n";
        return;
    }
    if(n>1 && n<5){
        cout<<"NO SOLUTION\n";
        return;
    }
    int cnt = 1;
    while(cnt <= n){
        cout<<cnt<<" ";
        cnt += 2;
    }
    cnt = 2;
    while(cnt <= n){
        cout<<cnt<<" ";
        cnt += 2;
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