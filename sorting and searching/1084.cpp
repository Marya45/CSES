#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    int ans = 0;
    while(i<n && j<m){
        int l = a[i] - k;
        int r = a[i] + k;
        if(b[j]>=l && b[j]<=r){
            j++;
            i++;
            ans++;
        }
        else if(b[j]<l){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<ans<<"\n";
 
}
