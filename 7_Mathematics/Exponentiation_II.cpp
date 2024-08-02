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

int f(int a, int b, int m){
    if(b==0) return 1;
    int c=f(a,b/2,m);
    return (b&1)?a*((c*c)%m)%m:(c*c)%m;
}
void solve(){
    const int m=1e9+7;
    int a,b,c;cin>>a>>b>>c;
    cout<<f(a,f(b,c,m-1),m)<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/