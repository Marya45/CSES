#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            set<int> st;
            for(int r=0;r<row;r++){
                st.insert(arr[r][col]);
            }
            for(int c=0;c<col;c++){
                st.insert(arr[row][c]);
            }
            int x=0;
            while (st.count(x))
            {
                x++;
            }
            arr[row][col] = x;
            cout<<arr[row][col]<<" ";
        }
        cout<<"\n";
    }
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}