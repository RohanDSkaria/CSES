#include <bits/stdc++.h>
#define endl '\n'
#define v vector<int>
#define all(a) a.begin(),a.end()
using namespace std;
void solve(){
    int n,m,k;cin>>n>>m>>k;
    v A(n),B(m);
    for(int i=0; i<n; i++) cin>>A[i];
    for(int i=0; i<m; i++) cin>>B[i];
    sort(all(A));
    sort(all(B));
    int ans=0,i=0,j=0;
    while(i<n && j<m){
        if(abs(A[i]-B[j])<=k){
            ans++;
            i++;
            j++;
        }
        else if(A[i]<B[j]) i++;
        else j++;
    }
    cout<<ans<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}