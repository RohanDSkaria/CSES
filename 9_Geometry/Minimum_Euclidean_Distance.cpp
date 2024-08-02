// // https://cses.fi/problemset/task/2194
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
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int minD=1;for(int i=0; i<r; i++){minD*=(n-i);minD/=(i+1);}return minD;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
int gcd(int a, int b){return b?gcd(b,a%b):a;}
int lcm(int a, int b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

struct Point{
    int x,y;
};
bool compareX(const Point &a, const Point &b){
    return a.x<b.x;
}
bool compareY(const Point &a, const Point &b){
    return a.y<b.y;
}
int dist(const Point &a, const Point &b) {
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}
int closestPairUtil(vector<Point> &points, int start, int end) {
    if(end-start<=3){
        int minDist = numeric_limits<int>::max();
        for (int i = start; i < end; ++i) {
            for (int j = i + 1; j < end; ++j) {
                minDist = min(minDist, dist(points[i], points[j]));
            }
        }
        return minDist;
    }
    int mid = (start + end) / 2;
    int dl = closestPairUtil(points, start, mid);
    int dr = closestPairUtil(points, mid, end);
    int d = min(dl, dr);

    vector<Point> strip;
    for (int i = start; i < end; ++i) {
        if (abs(points[i].x - points[mid].x) < d) {
            strip.push_back(points[i]);
        }
    }

    sort(strip.begin(), strip.end(), compareY);

    for (int i = 0; i < static_cast<int>(strip.size()); ++i) {
        for (int j = i + 1; j < min(i + 8, static_cast<int>(strip.size())); ++j) {
            d = min(d, dist(strip[i], strip[j]));
        }
    }

    return d;
}
int minD(vector<Point> &points){
    sort(points.begin(), points.end(), compareX);
    return closestPairUtil(points, 0, points.size());
}
int32_t main(){
    IOS
    int n;cin>>n;
    vector<Point> points(n);
    for(int i=0; i<n; i++){
        int x,y;cin>>x>>y;
        points[i]={x,y};
    }
    cout<<minD(points)<<endl;
}
// /*

// */