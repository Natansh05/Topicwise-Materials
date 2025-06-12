#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i = 0;i<n;++i)
        cin>>a[i];
    long long sum = 0,ans = 0;
    for(int k = 1;k<n;++k){
        if(n % k == 0){
            vector<long long> temp;
            sum = 0;
            for(int i = 1;i<=n;++i){
                sum+=a[i-1];
                if(i % k == 0){
                    temp.push_back(sum);
                    sum = 0;
                }
            }
            sort(temp.begin(),temp.end());
            ans  = max(temp[temp.size()-1] - temp[0],ans);
        }
    }
    cout<<ans<<endl;
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
