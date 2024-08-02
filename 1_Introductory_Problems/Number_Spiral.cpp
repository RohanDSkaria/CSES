#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long r,c; cin>>r>>c;
        cout<<((r<c)?((c%2==0)?(c*(c-1)+1-c+r):(c*(c-1)+1+c-r)):((r%2==0)?(r*(r-1)+1+r-c):(r*(r-1)+1-r+c)))<<endl;
    }
    return 0;
}