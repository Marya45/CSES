#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> st = {0,a[0]};
    for(int i=1;i<n;i++){
        set<int> t = st;
        for(auto it:t){
            st.insert(it+a[i]);
        }
    }
    st.erase(0);
    cout<<st.size()<<"\n";
    for(auto it:st){
        cout<<it<<" ";
    }cout<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}