#include <iostream>
using namespace std;
int main(){
    int n,q; cin>>n>>q;
    long A[n];
    for(int i=0; i<n; i++) cin>>A[i];
    for(int i=1; i<n; i++) A[i] += A[i-1];
    for(int i=0; i<q; i++){
        int a,b; cin>>a>>b;
        if(a==1) cout<<A[b-1]<<endl;
        else cout<<A[b-1]-A[a-2]<<endl;
    }
    return 0;
}