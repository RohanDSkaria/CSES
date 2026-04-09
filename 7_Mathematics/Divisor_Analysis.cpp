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

const int m=1e9+7;
int pow(int a, int b){
    if(b==1) return a;
    int k=pow(a,b>>1);
    k=(k*k)%m;
    if(b&1) return (a*k)%m;
    return k;
}
void solve(){
    int n;cin>>n;
    v<vi> a(n,vi(2));cin>>a;
    int cnt=1,sum=1,prod=1,cnt2=1;
    for(auto &i:a){
        cnt=cnt*(i[1]+1)%m;
        sum=sum*((pow(i[0],i[1]+1)-1)*pow(i[0]-1,m-2)%m)%m;
        prod=pow(prod,i[1]+1)*pow(pow(i[0],(i[1]*(i[1]+1)/2)),cnt2)%m;
        cnt2=(cnt2*(i[1]+1))%(m-1);
    }
    cout<<cnt<<" "<<sum<<" "<<prod;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/