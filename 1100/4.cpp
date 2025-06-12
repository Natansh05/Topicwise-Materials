#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i = 0;i<n;++i)
        cin>>a[i];
    int i = 0, j = 0,sum = 0,ans = INT_MIN;
    for(int j = 0;j<n;++j){
        if(sum < 0){
            sum = 0;
            i = j;
        }
        if(i < j){
            if((a[j] ^ a[j-1]) & 1)
                sum+=a[j];
            else{
                sum = a[j];
                i = j;
            }
        }
        else{
            sum = a[j];
        }
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
    return;
}



int main()
{
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
