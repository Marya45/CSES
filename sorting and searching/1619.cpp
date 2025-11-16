#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
 
    }
    int ans = 0;
    int prev = 0;
    for(auto it:mp){
        prev += it.second;
        ans = max(ans,prev);
    }
    cout<<ans<<"\n";
}
