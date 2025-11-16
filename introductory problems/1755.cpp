#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(auto it:s){
        freq[it-'A']++;
    }
    int odd = 0;
    for(int i=0;i<26;i++){
        odd += freq[i]%2;
    }
    if(odd > 1 || (s.length()%2==0 && odd)){
        cout<<"NO SOLUTION\n";
    }
    else{
        int n = s.length();
        vector<char> ans(n);
        int i=0,j=n-1;
        for(int k=0;k<26;k++){
            if(freq[k]%2){
                ans[n/2] = char(k + 'A');
                freq[k]--;
            }
            while(freq[k]>0){
                ans[i++] = char(k + 'A');
                freq[k]--;
                if(freq[k]){
                    ans[j--] = char(k + 'A');
                    freq[k]--;
                }
            }
        }
        for(auto it:ans){
            cout<<it;
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