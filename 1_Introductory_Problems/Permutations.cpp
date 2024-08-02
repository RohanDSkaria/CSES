#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    if(n==2 || n==3) cout<<"NO SOLUTION";
    else{
        for(int i=2; i>0; i--)
            for(int j=i; j<=n; j+=2) cout<<j<<" ";
    }
    return 0;
}