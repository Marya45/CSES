#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n,target;
    cin>>n>>target;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr.begin(),arr.end());
 
    for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
            int l=i+1 , r=n-1;
            while(l<r){
                int tsum = arr[j].first + arr[i].first + arr[l].first + arr[r].first;
                if(tsum == target){
                    cout<<arr[j].second<<" "<<arr[i].second<<" "<<arr[l].second<<" "<<arr[r].second<<"\n";
                    return 0;
                }
                else if(tsum > target){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
}
