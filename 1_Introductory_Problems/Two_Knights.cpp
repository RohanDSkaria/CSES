#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(long long i=1; i<=n; i++){
        cout<<i*i*(i*i-1)/2 - 8*((i-2)*(i-1)/2)<<endl;
    }
    return 0;
}