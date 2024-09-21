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

bool cc(vi &a, int m, int t){
    int c=0;
    for(int i:a){
        c+=m/i;
        if(c>=t) return 1;
    }
    return 0;
}
void solve(){
    int n,t;cin>>n>>t;
    vi a(n);cin>>a;
    int s=1,e=1e18;
    while(s<=e){
        int m=s+(e-s)/2;
        cc(a,m,t)?e=m-1:s=m+1;
    }
    cout<<s<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/