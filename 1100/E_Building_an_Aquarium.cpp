#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,w;
    cin>>n>>w;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans = 0;
    sort(a.begin(), a.end());
    long long sum = 0, h = 0;
    for(int i=0;i<n;++i){
        sum+=a[i];
        h = (w + sum)/(i+1);
        if(h<=a[i+1] || i == n-1){
            ans = max(ans, h);
            break;
        }
    }
    cout << ans << endl;
    return;
}

int main() {
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}