// https://cses.fi/problemset/task/2163
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vb v<bool>
#define vc v<char>
#define vvi v<vi>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << " = " << x << endl;
#define pii pair<int,int>
#define vpii v<pii>
#define fi first
#define se second
#define mii map<int,int>
#define mci map<char,int>
#define si set<int>
#define sc set<char>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
int gcd(int a, int b){return b?gcd(b,a%b):a;}
int lcm(int a, int b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
void solve(){
    int N,k;cin>>N>>k;
    if(N==1){cout<<1<<endl;return;}
    if(k==0){for(int i=1; i<=N; i++) cout<<i<<" ";return;}
    ListNode* a = new ListNode(1);
    ListNode* c=a;
    for(int i=2; i<=N; i++){
        ListNode* n = new ListNode(i);
        c->next=n;
        c=c->next;
    }
    c->next=a;
    c=a;
    ListNode* p = new ListNode(0);
    ListNode* n=c->next;
    while(c->val!=n->val){
        for(int i=0; i<k; i++){p=c;c=n;n=n->next;}
        cout<<c->val<<" ";
        p->next=n;c=n;n=n->next;
    }
    cout<<c->val<<endl;
}
int32_t main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
0 1 2 3 4 5 6 7
    p c n
1  4
c  pn
pn  c
c  pn
 4
cpn



*/