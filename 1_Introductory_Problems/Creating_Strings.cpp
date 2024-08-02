#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int n;
void fn(set<string> &st, string &s, int a){
    if(a+1==n){
        st.insert(s);
        return;
    }
    for(int i=a; i<n; i++){
        swap(s[a],s[i]);
        fn(st,s,a+1);
        swap(s[a],s[i]);
    }
}
void solve(){
    string s;cin>>s;
    n=s.length();
    set<string> st;
    fn(st,s,0);
    cout<<st.size()<<endl;
    for(auto c:st) cout<<c<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/