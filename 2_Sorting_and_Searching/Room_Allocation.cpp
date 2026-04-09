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
    int n;cin>>n;
    v<vi> a(n,vi(3));
    for(int i=0; i<n; i++){
        int x,y;cin>>x>>y;
        a[i]={y,x,i};
    }
    sort(all(a));
    deb(a)
    int k=1,c=1;
    vi ans(n);
    ans[a[0][2]]=1;
    for(int i=1; i<n; i++){
        deb(i,ans)
        if(a[i][1]<=a[i-1][0] && c==k) c++;
        k=max(k,c);
        ans[a[i][2]]=c;
        if(a[i][1]!=a[i-1][1]) c=max(1ll,c-1);
        deb(ans)
    }
    cout<<k<<endl<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
0 1 2 3 4 5 6 7 8 9
1 1 2       3   1  
1 1 2       3   1
1 1 2   1   3   1
1 1 2   1   3 1 1
1 1 2   1   3 1 1 1
1 1 2 1 1 2 3 1 1 1
*/