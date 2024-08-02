// https://cses.fi/problemset/task/1636
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

const int m=1e9+7;
void solve(){
    int n,x;cin>>n>>x;
    vi a(n);cin>>a;
    vi dp(x+1);dp[0]=1;
    for(int j:a) for(int i=j; i<=x; i++) if(i-j>=0) dp[i]=(dp[i]+dp[i-j])%m;
    cout<<dp[x]<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/