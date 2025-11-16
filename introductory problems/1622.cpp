#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void recur(int i,string s,string tmp,set<string>&st,vector<int>&visited){
    if(tmp.length()==s.length()){
        st.insert(tmp);
    }
    else{
        for(int j=0;j<s.length();j++){
            if(visited[j]==0){
                visited[j] = 1;
                recur(j+1,s,tmp+s[j],st,visited);
                visited[j] = 0;
            }
        }
    }
}

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    vector<int> visited(n,0);
    set<string> st;
    recur(0,s,"",st,visited);
    cout<<st.size()<<"\n";
    for(auto it:st){
        cout<<it<<"\n";
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