#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int N = 7;

int recur(int i,string &s,int r,int c){
    if(r==N-1 && c==0 && i==s.length()){
        return 1;
    }
    if(r<0 || r>=N || c<0 || c>=N || i==s.length()){
        return 0;
    }
    int q = 0;
    int d = 0;
    if(s[i]=='?'){
        q = recur(i+1,s,r+1,c) + recur(i+1,s,r,c+1) + recur(i+1,s,r-1,c) + recur(i+1,s,r,c-1);
    }
    else if(s[i]=='D'){
        d = recur(i+1,s,r+1,c);
    }
    else if(s[i]=='U'){
        d = recur(i+1,s,r-1,c);
    }
    else if(s[i]=='L'){
        d = recur(i+1,s,r,c-1);
    }
    else if(s[i]=='R'){
        d = recur(i+1,s,r,c+1);
    }
    return q+d;
}

void solve(){
    string s;
    cin>>s;
    cout<<recur(0,s,0,0)<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}