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
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

v<v<bool>> vis;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
void dfs(v<string> &a, int i, int j){
    vis[i][j]=1;
    for(int d=0; d<4; d++){
        int nx = i+dx[d];
        int ny = j+dy[d];
        if(nx<a.size() && nx>=0 && ny<a[0].size() && ny>=0){
            if(vis[nx][ny] || a[nx][ny]=='#') continue;
            dfs(a,nx,ny);
        }
    }
}
void solve(){
    int n,m;cin>>n>>m;
    v<string> a(n);cin>>a;
    vis.assign(n,v<bool>(m));
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vis[i][j] || a[i][j]=='#') continue;
            c++;
            dfs(a,i,j);
        }
    }
    cout<<c<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/