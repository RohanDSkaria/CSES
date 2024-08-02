#include <bits/stdc++.h>
#define v vector<int>
#define all(a) a.begin(),a.end()
using namespace std;
void solve(){
    int n,x; cin>>n>>x;
    v w(n);
    for(int i=0; i<n; i++) cin>>w[i];
    sort(all(w));
    int s=0,e=n-1;
    int ans=0;
    while(s<=e){
        if(w[s]+w[e]<=x) s++; 
        e--;
        ans++;
    }
    cout<<ans;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}