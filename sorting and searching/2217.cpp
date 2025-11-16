#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1,0);
    vector<int> pos(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pos[arr[i]] = i;
    }
    int ans = 1;
    for(int i=2;i<=n;i++){
        if(pos[i-1] > pos[i]){
            ans++;
        }
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
 
        int va = arr[a];
        int vb = arr[b];
 
        int prev_pos_a = pos[va];
        int prev_pos_b = pos[vb]; 
 
        swap(arr[a],arr[b]);
 
 
        int diff = 0;
        if(pos[va-1] > pos[va]){
            diff++;
        }
        if(va+1 <= n && pos[va] > pos[va+1]){
            diff++;
        }
        if(pos[vb-1] > pos[vb]){
            diff++;
        }
        if(vb+1 <=n && pos[vb] > pos[vb+1]){
            diff++;
        }
 
        if(abs(va-vb) == 1 && (pos[min(va,vb)] > pos[max(va,vb)]) ){
            diff--;
        }
 
        swap(pos[va],pos[vb]);
 
        int add = 0;
 
        if(pos[va-1] > pos[va]){
            add++;
        }
        if(va+1 <= n && pos[va] > pos[va+1]){
            add++;
        }
        if(pos[vb-1] > pos[vb]){
            add++;
        }
        if(vb+1 <= n && pos[vb] > pos[vb+1]){
            add++;
        }
 
        if(abs(va-vb) == 1 && (pos[min(va,vb)] > pos[max(va,vb)]) ){
            add--;
        }
        
        
        ans -= diff;
        ans += add;
        cout<<ans<<"\n";
 
    }
 
 
}