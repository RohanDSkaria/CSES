#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define p pair
#define pii p<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int m=1e9+7;
vi dp;
int fn(int n){
    if(n==1 || n==0) return !n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=((n-1)*(fn(n-1)+fn(n-2)))%m;
}
void solve(){
    int n;cin>>n;
    dp.assign(n+1,-1);
    cout<<fn(n)<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/