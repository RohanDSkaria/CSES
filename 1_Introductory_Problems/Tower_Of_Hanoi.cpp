#include <iostream>
using namespace std;
void towerOfHanoi(int n, int a, int c, int b){
    if(n==0) return;
    towerOfHanoi(n-1,a,b,c);
    cout<<a<<" "<<c<<endl;
    towerOfHanoi(n-1,b,c,a);
}
int main(){
    int n; cin>>n;
    int ans=1;
    for(int i=0; i<n; i++) ans*=2;
    cout<<ans-1<<endl;
    towerOfHanoi(n,1,3,2);
    return 0;
}