// https://cses.fi/problemset/task/1639
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
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

v<vi> dp(5000, vi(5000));
string a,b;
int ed(int i, int j){
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(dp[i][j]) return dp[i][j];
    if(a[i]==b[j]) return dp[i][j]=ed(i-1,j-1);
    return dp[i][j]=1+min(ed(i-1,j),min(ed(i-1,j-1),ed(i,j-1)));
}
void solve(){
    cin>>a>>b;
    cout<<ed(a.length()-1,b.length()-1)<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/