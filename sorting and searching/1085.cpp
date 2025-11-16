// Array Division CSES
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
bool possible(vector<ll>&arr,ll x,ll k){
    ll n = arr.size();
    ll curr_partition = 1;
    ll curr_sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            return false;
        }
        if(curr_sum+arr[i]<=x){
            curr_sum += arr[i];
        }
        else{
            curr_partition++;
            curr_sum = arr[i];
        }
    }
    if(curr_partition<=k){
        return true;
    }
    return false;
}
 
void solve(){   
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    ll left = 0, right = 0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        right += arr[i];
    }
    ll ans = right;
    while(left<=right){
        ll mid = (left+right)/2;
        if(possible(arr,mid,k)){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
