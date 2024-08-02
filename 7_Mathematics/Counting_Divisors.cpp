// https://cses.fi/problemset/task/1713
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long // this gives TLE!
// #define pb(a) push_back(a)
// #define v vector
// #define vi v<int>
// #define vb v<bool>
// #define vc v<char>
// #define vvi v<vi>
// #define bl cout<<endl;
// #define all(a) a.begin(),a.end()
// #define rall(a) a.rbegin(),a.rend()
// #define deb(x) cout << #x << " = " << x << endl;
// #define pii pair<int,int>
// #define vpii v<pii>
// #define fi first
// #define se second
// #define mii map<int,int>
// #define mci map<char,int>
// #define si set<int>
// #define sc set<char>
// int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
// vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
// int gcd(int a, int b){return b?gcd(b,a%b):a;}
// int lcm(int a, int b){return a/gcd(a,b)*b;}
// template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
// template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
int cnt(int n){
    int ans=0;
    for(int i=1; i*i<=n; i++) if(n%i==0) ans+=(i*i==n)?1:2;
    return ans;
}
void solve(){
    int n;cin>>n;
    cout<<cnt(n)<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/