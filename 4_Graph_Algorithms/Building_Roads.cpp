#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,pair<F,S>& p){os<<"{"<<p.first<<","<<p.second<<"}";return os;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

v<bool> isv;
void dfs(v<vi> &a, int k){
    if(isv[k]) return;
    isv[k]=1;
    for(int &i:a[k]) dfs(a,i);
}
void solve(){
    int n,m;cin>>n>>m;
    v<vi> a(n);
    for(int i=0; i<m; i++){
        int b,c;cin>>b>>c;
        a[b-1].pb(c-1);
        a[c-1].pb(b-1);
    }
    isv.assign(n,0);
    int ans=-1;
    vi b;
    for(int i=0; i<n; i++){
        if(isv[i]) continue;
        b.pb(i+1);
        ans++;
        dfs(a,i);
    }
    m=b.size()-1;
    cout<<ans<<endl;
    for(int i=0; i<m; i++) cout<<b[i]<<" "<<b[i+1]<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/