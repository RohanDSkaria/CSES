#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n>>x;
    int ans=0,c=0;
    map<int,int> m={{0,1}};
    for(int i=0,k; i<n; i++){
        cin>>k;
        c+=k;
        ans+=m[c-x];
        m[c]++;
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
5 7
2 -1 3 5 -2

0    2 1 4 9 7
           

*/