#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int k;
    cin>>k;
    // 1*9 , 2*90 , 3*900, 4*9000 ..

    int l=1 , r=9;
    int cnt = 0;
    while(true){
        if(k > l*r){
            k -= l*r;
        }
        else{
            int skip = (k-1)/l;
            k -= skip*l;
            int num = pow(10,l-1);
            num += skip;
            cout<< to_string(num)[k-1]<<"\n";
            return;
        }
        l++;
        r*=10;
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