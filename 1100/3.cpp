#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> pl;

void printVec(vector<int> &ans){
    for(auto &it : ans)
        cout<<it<<" ";
    cout<<endl;
    return;
}

void solve(){
    int n;
    cin>>n;
    vector<pl> a(n,{0,-1});
    vector<ll> pre(n,0);
    ll val = 0;
    for(int i =0;i<n;++i){
        cin>>val;
        a[i] = {val,i};
    }
    sort(a.begin(),a.end());
    pre[0] = a[0].first;
    for(int i = 1;i<n;++i)
        pre[i]=pre[i-1] + a[i].first;
    vector<int> ans(n,0);
    val = 0;
    int j = 0;
    for(int i = 0;i<n;++i){
        int found = i;
        j = i;
        while(j<n){
            pl temp = {pre[j] + 1,INT_MIN};
            int ind = lower_bound(a.begin(),a.end(),temp) - a.begin() - 1;
            if(ind == j)
                break;
            found+=ind - j;
            j = ind;
        }
        ans[a[i].second] = found;
    }
    printVec(ans);
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
