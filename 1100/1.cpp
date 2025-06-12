#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<int,int> mp;
    int cnt =0,ans =0;
    for(int i =0 ;i<n;++i){
        mp[s[i]]++;
        if(mp[s[i]] == 1)
            ++cnt;
        ans+=cnt;
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
