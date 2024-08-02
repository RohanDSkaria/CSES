#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int A[n]{};
    int k;
    for(int i=0; i<n-1; i++){
        cin>>k;
        A[k-1] = 1;
    }
    for(int i=0; i<n; i++) if(A[i]==0) cout<<i+1;
    return 0;
}