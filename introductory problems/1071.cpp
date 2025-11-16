#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int r,c;
    cin>>r>>c;
    // considering the left or top element in square formed by r c
    if(r>=c){
        if(r&1){
            cout<< (r-1)*(r-1) + 1 + c - 1 <<"\n";
        }
        else{
            cout<< r*r - c + 1 <<"\n";
        }
    }
    else{
        if(c&1){
            cout<< c*c - r + 1<<"\n";
        }
        else{
            cout<< (c-1)*(c-1) + 1 + r - 1 <<"\n";
        }
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