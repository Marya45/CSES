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
    sort(arr.begin(),arr.end());
    int ans = LLONG_MAX;
    int cnt = 0;
    int mid = n/2;
    for(int i=0;i<n;i++){
        cnt += abs(arr[i]-arr[mid]);
    }
    ans = min(ans,cnt);
    if(n%2==0){
        mid--;
        cnt = 0;
        for(int i=0;i<n;i++){
            cnt += abs(arr[i]-arr[mid]);
        }
        ans = min(ans,cnt);
    }   
    cout<<ans<<"\n";
}
