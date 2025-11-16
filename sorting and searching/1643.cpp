#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = arr[0] , curr = 0;
    for(int i=0;i<n;i++){
        curr += arr[i];
        ans = max(ans,curr);
        if(curr < 0 ){
            curr = 0;
        }
    }
    cout<<ans<<"\n";
}
