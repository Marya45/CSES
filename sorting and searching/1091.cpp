#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n,m;
    cin>>n>>m;
    multiset<int> mt;
    vector<int>cust(m);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        mt.insert(x);
    }
    for(int i=0;i<m;i++){
        cin>>cust[i];
    }
    for(int i=0;i<m;i++){
        int p = cust[i];
        auto it = mt.upper_bound(p);
        if(it==mt.begin()){
            cout<<"-1\n";
        }
        else{
            --it;
            cout<<*it<<"\n";
            mt.erase(it);
        }
    }
 
}
