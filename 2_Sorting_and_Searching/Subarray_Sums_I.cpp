#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int ans=0,sum=0;
    for(int l=0,r=0; r<n; r++){
        sum+=a[r];
        while(sum>x) sum-=a[l++];
        if(sum==x) ans++;
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/