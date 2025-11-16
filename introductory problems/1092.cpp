#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    int tsum = n*(n+1)/2;
    if(tsum%2){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        vector<int> a,b;
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                if(i&1){
                    a.push_back(i+1);
                    a.push_back(n-i);
                }
                else{
                    b.push_back(i+1);
                    b.push_back(n-i);
                }
            }
        }
        else{
            for(int i=0;i<(n-1)/2;i++){
                if(i&1){
                    a.push_back(i+1);
                    a.push_back(n-i-1);
                }
                else{
                    b.push_back(i+1);
                    b.push_back(n-i-1);
                }
            }
            if(a.size() > b.size()){
                b.push_back(n);
            }
            else{
                a.push_back(n);
            }
        }
        cout<<a.size()<<"\n";
        for(auto it:a){
            cout<<it<<" ";
        }cout<<"\n";
        cout<<b.size()<<"\n";
        for(auto it:b){
            cout<<it<<" ";
        }cout<<"\n";
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