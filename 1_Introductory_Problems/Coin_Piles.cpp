#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        long long c = a+b;
        if(c%3==0 && a<=2*b && b<=2*a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}