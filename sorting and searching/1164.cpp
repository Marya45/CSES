#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(3));
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr[i] = {x,y,i};
    }
    sort(arr.begin(),arr.end());
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    
    vector<int> ans(n);
    int rooms = 0;
 
    for(int i=0;i<n;i++){
        int s = arr[i][0];
        int e = arr[i][1];
        int ind = arr[i][2];
 
        if(pq.empty() || pq.top().first >= s){
            rooms++;
            pq.push({e,rooms});
            ans[ind] = rooms;
        }
        else{
            int vacant = pq.top().second;
            pq.pop();
            pq.push({e,vacant});
            ans[ind] = vacant;
        }
 
    }
 
    cout<<rooms<<"\n";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
 
}
