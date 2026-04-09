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
int k;
bool dfs(int p, int c){
    for(int i:adj[c]){
        if(i==p) continue;
        if(vis[i][0]){
            k=i;
            vis[i]={1,c};
            return 1;
        }
        vis[i]={1,c};
        if(dfs(c,i)) return 1;
    }
    return 0;
}
void solve(){
    int n,m;cin>>n>>m;
    adj.assign(n,vi());
    vis.assign(n,{0,-1});
    k=-1;
    for(int i=0; i<m; i++){
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(int i=0; i<n; i++){
        if(vis[i][0]) continue;
        vis[i][0]=1;
        if(dfs(-1,i)) break;
    }
    if(k==-1){
        cout<<"IMPOSSIBLE";
        return;
    }
    vi ans={k+1};
    for(int i=vis[k][1]; i!=k; i=vis[i][1]) ans.pb(i+1);
    cout<<ans.size()+1<<endl<<ans<<ans[0];
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/