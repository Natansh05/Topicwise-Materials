#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

void code()
{
    int n,k;
    cin >> n >> k;
    vector<long long> a(n),b(n), pre(n), mb(n);
 
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i==0) pre[i]=a[i];
        else pre[i]=pre[i-1]+a[i];
    }
    
    for(int i=0;i<n;i++){
        cin >> b[i];
        if(i==0) {
            mb[i]=b[i];
        }
        else mb[i]=max(mb[i-1],b[i]);
    }
    int ans=0, j=0;
    while(j<k){
        int temp=0;
        if(j<n){
            temp+=pre[j];
            temp+=((k-j-1)*mb[j]);
            ans=max(ans,temp);
        }
        else{
            temp+=pre[n-1];
            temp+=((k-n)*mb[n-1]);
            ans=max(ans,temp);
            break;
        }
        j++;
    }
    cout<<ans<<endl;
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t = 1;
    cin >> t;
    while (t--)
    {
        code();
    }
    return 0;
}
