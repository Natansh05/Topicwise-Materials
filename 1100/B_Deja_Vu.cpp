#include<bits/stdc++.h>
using namespace std;

void printVec(const vector<int>& v){
    for(int i = 0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n,0);
    vector<int> x(q,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>x[i];
    }

    int prev = 31;
    int val =  0;
    for(int i = 0;i<q;++i){
        if(x[i]>=prev)
            continue;
        val = pow(2,x[i]);
        for(int j = 0;j<n;++j){
            if(a[j] % val == 0){
                a[j]+=(val/2);
            }
        }
        prev = x[i];
    }

    printVec(a);
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}