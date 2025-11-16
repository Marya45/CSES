#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    bool flag = false;
 
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        if(flag){
            cout<<tp<<" ";
        }
        else{
            q.push(tp);
        }
        flag = !flag;
    }
 
 
}
