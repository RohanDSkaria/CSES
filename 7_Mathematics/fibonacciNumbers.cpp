#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
// ll nCr(int n, int r){
// 	ll ans=1;
// 	for(int i=1; i<=r; i++){
// 		ans *= n-i+1;
// 		ans/=i;
// 	}
// 	return ans;
// }
const int m=1000000007;
map<ll,ll> dp;
ll f(ll n){
	if(dp.count(n)) return dp[n];
	ll k=n/2;
	if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k))%m;
	else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1))%m;
}
int main(){
    dp[0]=dp[1]=1;
    ll n; cin>>n;
    cout<<f(n-1);
}
/*
fn = fn-1 + fn-2;
fn = f
*/
// vector<ll> mat(vector<ll> &A, vector<ll> B){
//     vector<ll> C(4);
//     C[0]=((A[0]*B[0])%m+(A[1]*B[2])%m)%m;
//     C[1]=((A[0]*B[1])%m+(A[1]*B[3])%m)%m;
//     C[2]=((A[2]*B[0])%m+(A[3]*B[2])%m)%m;
//     C[3]=((A[2]*B[1])%m+(A[3]*B[3])%m)%m;
//     return C;
// }
// vector<ll> Apow(vector<ll> &A, ll n){
//     if(n==0) return{1,0,0,1};
//     vector<ll> B = Apow(A,n/2);
//     B = mat(B,B);
//     if(n&1) B = mat(B,{0,1,1,1});
//     return B;
// }
// ll nThFib(ll n){
//     vector<ll> A={0,1,1,1};
//     return Apow(A,n)[1];
// }