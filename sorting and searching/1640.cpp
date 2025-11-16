#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int v1 = arr[i].first;
        int l = i+1;
        int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            int v2 = arr[mid].first;
            if(v1+v2==x){
                cout<<arr[i].second<<" "<<arr[mid].second<<"\n";
                return 0;
            }
            else if(v1+v2>x){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
 
}
