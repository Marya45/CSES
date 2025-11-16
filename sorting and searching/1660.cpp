#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0, curr_sum = 0;
    int i=0,j=0;
    while(j<n){
        curr_sum += arr[j];
        while(i<=j && curr_sum > target){
            curr_sum -= arr[i];
            i++;
        }
        if(curr_sum==target){
            ans++;
        }
        j++;
    }

    cout<<ans<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}