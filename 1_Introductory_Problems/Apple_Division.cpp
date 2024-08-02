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

int fn(vi &a, int i, int l, int r){
    if(i==a.size()) return abs(l-r);
    return min(fn(a,i+1,l+a[i],r),fn(a,i+1,l,r+a[i]));
}
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    cout<<fn(a,0,0,0);
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
3 2 7 4 1
3 2 
13
*/