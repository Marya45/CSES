#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

bool check(int r,int c,int n){
    return r>=0 && c>=0 && r<n && c<n;
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n,INT_MAX));
    arr[0][0] = 0;
    queue<pair<int,int>> q;
    q.push({0,0});

    int dir_x[8] = {-1,-2,-2,-1,1,2,2,1};
    int dir_y[8] = {-2,-1,1,2,2,1,-1,-2};

    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        int v = arr[r][c];
        q.pop();

        for(int i=0;i<8;i++){
            int nr = r + dir_x[i];
            int nc = c + dir_y[i];
            if(check(nr,nc,n) && arr[r][c]+1 < arr[nr][nc]){
                arr[nr][nc] = arr[r][c]+1;
                q.push({nr,nc});
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
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