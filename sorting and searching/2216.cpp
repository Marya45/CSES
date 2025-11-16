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
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.count(arr[i]-1)){
            mp.erase(arr[i]-1);
        }
        mp[arr[i]]++;
    }
    cout<<mp.size()<<"\n";
}
