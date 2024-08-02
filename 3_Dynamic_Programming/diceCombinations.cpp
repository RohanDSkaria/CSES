#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i
#define pr(A) for(int i=A.size()-1; i>=0; i--) cout<<A[i]
#define v vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define bl cout<<endl
using namespace std;
int some(v& A){int a=0;for(int i:A){a+=i;} return a;}
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=i+1;}return ans;}
int m = 1e9+7;
/*Approach-3*/
void cnt(int n, vl& dp){
    for(int i=1; i<=min(n,6); i++) dp[i]=1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<min(i,7); j++) dp[i]+=dp[i-j]%m;
}
int main(){
    int n;cin>>n;
    vl dp(n+1);
    dp[0]=1;
    cnt(n,dp);
    cout<<dp[n]%m;
}
/*Approach-1:
ll cnt(int n, vl& dp){
    if(n<0) return 0;
    if(dp[n]!=0) return dp[n];
    for(int i=1; i<7; i++) dp[n] = (dp[n] + cnt(n-i,dp))%m;
    return dp[n];
}
int main(){
    int n;cin>>n;
    vl dp(n+1,0);
    dp[0]=1;
    cout<<cnt(n,dp);
}
*/
/*Approach-2:
void cnt(int n, vl& dp){
    for(int i=1; i<=n; i++){
        ll sum=0;
        for(int j=1; j<7; j++)
            if(i-j>=0) sum+=dp[i-j]%m;
        dp[i]=sum%m;
    }
}
int main(){
    int n;cin>>n;
    vl dp(n+1);
    dp[0]=1;
    cnt(n,dp);
    cout<<dp[n];
}
*/