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

void solve(){
    int n,m;cin>>n>>m;
    v<string> a(n);cin>>a;
    v<string> p(n,string(m,'X'));
    const int dx[4]={1,0,-1,0};
    const int dy[4]={0,-1,0,1};
    const char dir[4]={'D','L','U','R'};
    queue<pair<int,int>> q;
    pair<int,int> st,end={-1,-1};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='A'){
                st={i,j};
                q.push({i,j});
                break;
            }
        }
        if(!q.empty()) break;
    }
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int d=0; d<4; d++){
            int nx=x+dx[d];
            int ny=y+dy[d];
            if(nx>=0 && nx<n && ny>=0 && ny<m && p[nx][ny]=='X' && a[nx][ny]!='#'){
                p[nx][ny]=dir[d];
                q.push({nx,ny});
                if(a[nx][ny]=='B'){
                    end={nx,ny};
                    break;
                }
            }
        }
        if(end.first!=-1) break;
    }
    if(end.first==-1){
        cout<<"NO";
        return;
    }
    cout<<"YES\n";
    string ans;
    while(st!=end){
        auto &[x,y]=end;
        char c=p[x][y];
        ans+=c;
        if(c=='U') x++;
        if(c=='D') x--;
        if(c=='L') y++;
        if(c=='R') y--;
    }
    reverse(all(ans));
    cout<<ans.size()<<endl<<ans;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/