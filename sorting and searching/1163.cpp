#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int x,n;
    cin>>x>>n;

    multiset<int> len;
    set<pair<int,int>> ranges;
    ranges.insert({0,x});
    len.insert(x);

    for(int i=0;i<n;i++){
        int pos;
        cin>>pos;

        auto it = ranges.upper_bound({pos,0});
        it--;

        int st = it->first;
        int end = it->second;

        ranges.erase(it);
        len.erase(len.find(end-st));

        ranges.insert({st,pos});
        ranges.insert({pos,end});

        len.insert(pos-st);
        len.insert(end-pos);

        cout<<*len.rbegin()<<" ";

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