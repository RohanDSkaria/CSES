#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i++) cin>>A[i];
    sort(A,A+n);
    int cnt=1;
    int temp=A[0];
    for(int i:A){
        if(i!=temp){
            temp=i;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}