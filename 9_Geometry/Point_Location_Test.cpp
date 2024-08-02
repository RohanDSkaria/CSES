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
#define yes {cout<<"RIGHT"<<endl;return;}
#define no {cout<<"LEFT"<<endl;return;}
#define dd {cout<<"TOUCH"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int x1,x2,x3,y1,y2,y3;cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int k=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
    (k==0)?(dd):(k>0)?(no):(yes);
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/