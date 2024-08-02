#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i++) cin>>A[i];
    long long ans=0;
    for(int i=0; i<n-1; i++){
        if(A[i+1]<A[i]){
            ans+=A[i]-A[i+1];
            A[i+1]=A[i];
        }
    }
    cout<<ans;
    return 0;
}