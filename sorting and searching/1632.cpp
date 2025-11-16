#include<bits/stdc++.h>
using namespace std;
#define int long long
 
struct movie{
    int start,end;
};
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<movie> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].start>>arr[i].end;
    }
 
    multiset<int> free_times;
    for(int i=0;i<k;i++){
        free_times.insert(-1);
    }
    sort(arr.begin(),arr.end(),[&](movie a,movie b){
        if(a.end==b.end){
            return a.start < b.start;
        }
        return a.end < b.end;
    });
 
    int ans = 0;
    for(int i=0;i<n;i++){
        auto it = free_times.upper_bound(arr[i].start);
        if(it==free_times.begin()){
            continue;
        }
        --it;
        free_times.erase(it);
        free_times.insert(arr[i].end);
        ans++;
    }
 
    cout<<ans<<"\n";
}
 
signed main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
