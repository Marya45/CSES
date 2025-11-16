#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans = 0;
    int i=0,j=n-1;
    while(i<=j){
        int curr = arr[j];
        if(i!=j){
            curr += arr[i];
        }
 
        if(curr <= x){
            i++;
            j--;
        }
        else if(curr-arr[i]<=x){
            j--;
        }
        else{
            i++;
        }
        ans++;
    }
    cout<<ans<<"\n";
 
}
