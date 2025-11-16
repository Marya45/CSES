#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main() {
    string s;
    cin>>s;
    int n = s.length();
    vector<int> freq(26,0);
    for(auto it:s){
        freq[it-'A']++;
    }
    
    string ans = "";
    
    while(ans.length() < n){
        bool anything = false;
        
        for(int i=0;i<26;i++){
            if(freq[i]>0 && (ans.empty() || ans.back()!=('A'+i))){
                freq[i]--;
                ans += ('A'+i);
                
                int suff = n-ans.length();
                bool can_finish = true;
                
                for(int j=0;j<26;j++){
                    
                    if(i!=j){
                        
                        if(freq[j] > (suff+1)/2){
                            can_finish = false;
                            break;
                        }
                        
                    }
                    else{
                        
                        if(freq[j] > suff/2){
                            can_finish = false;
                            break;
                        }
                        
                    }
                    
                }
                
                if(can_finish){
                    anything = true;
                    break;
                }
                else{
                    freq[i]++;
                    ans.pop_back();
                }
                
                
            }
        }
        
        if(!anything){
            break;
        }
    }
    
    if(ans.empty()){
        cout<<"-1\n";
    }
    else{   
        cout<<ans<<"\n";
    }
    
}