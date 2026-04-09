#include <bits/stdc++.h>
using namespace std;
// #define int long long

void solve(){
    int n;cin>>n;
    int ans=0;
    for(int i=1; i*i<=n; i++) if(n%i==0) ans+=2-(i*i==n);
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/