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

template<typename T>
class segtree{
public:
    v<T> t;
    int n;
    T idn;
    segtree(int n, T idn) : n(n), idn(idn) {
        t.assign(4*n,idn);
    }
    T merge(T a, T b){
        return min(a,b);
    }
    int query(int l,int r){
        function<T(int,int,int)> f=[&](int tid,int tl,int tr)->T
        {
            if(l>tr || r<tl) return idn;
            if(l<=tl && r>=tr) return t[tid];
            int tm=(tl+tr)/2;
            return merge(f(2*tid+1,tl,tm),f(2*tid+2,tm+1,tr));
        };
        return f(0,0,n-1);
    }
    void set(int id,T val){
        function<void(int,int,int)> f=[&](int tid,int tl,int tr){
            if(tl==tr){
                t[tid]=val;
                return;
            }
            int tm=(tl+tr)/2;
            if(id<=tm) f(2*tid+1,tl,tm);
            else f(2*tid+2,tm+1,tr);
            t[tid]=merge(t[2*tid+1],t[2*tid+2]);
        };
        f(0,0,n-1);
    }
};
void solve(){
    int n,q;cin>>n>>q;
    segtree<int> st(n,INT_MAX);
    for(int i=0,a; i<n; i++){
        cin>>a;
        st.set(i,a);
    }
    while(q--){
        int a,b;cin>>a>>b;
        cout<<st.query(a-1,b-1)<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/