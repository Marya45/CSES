#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main(){
    int n;
    cin>>n;
    multiset<int> mt;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        auto it = mt.upper_bound(x);
        if(it!=mt.end()){
            mt.erase(it);
        }
        mt.insert(x);
    }
    cout<<mt.size()<<"\n";
}
