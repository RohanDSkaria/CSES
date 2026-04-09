#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define v vector
#define vi v<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<"{"<<p.first<<","<<p.second<<"}";}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

v<vi> adj,vis;
int n,m;
bool dfs(int p, int c){
    for(int i:adj[c]){
        if(i==p) continue;
        if(vis[i][0]){
            if(vis[i]==vis[c]) return 0;
            continue;
        }
        vis[i]={1,!vis[c][1]};
        if(dfs(c,i)) continue;
        return 0;
    }
    return 1;
}
void solve(){
    cin>>n>>m;
    adj.assign(n,vi());
    vis.assign(n,vi(2,0));
    for(int i=0; i<m; i++){
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(int i=0; i<n; i++){
        if(vis[i][0]) continue;
        vis[i]={1,0};
        if(dfs(-1,i)) continue;
        cout<<"IMPOSSIBLE";
        return;
    }
    for(vi &i:vis) cout<<i[1]+1<<" ";
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/