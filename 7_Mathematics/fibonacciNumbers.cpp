#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

map<int,int> dp;
const int m = 1e9+7;
int f(int n){
	if(dp.count(n)) return dp[n];
	int k=n/2;
	if(n&1) return dp[n]=(f(k)*(f(k+1)+f(k-1)))%m;
	int g=f(k),h=f(k-1);
	return dp[n]=(g*g + h*h)%m;
}
void solve(){
	int n;cin>>n;
	dp[0]=dp[1]=1;dp[-1]=0;
	cout<<f(n-1)<<endl;
}
int32_t main(){
	IOS int t=1;
	// cin>>t;
	while(t--) solve();
}
/*

*/