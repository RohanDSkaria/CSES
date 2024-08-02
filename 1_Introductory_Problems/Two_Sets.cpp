#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    if((n*(n+1)/2)%2==0) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
        return 0;
    }
    if(n==2){
        cout<<1<<endl<<1<<endl<<1<<endl<<1<<endl;
        return 0;
    }
    vector<int> A;
    vector<int> B;
    if(n%2==0){
        int k=1;
        int j=1;
        while(A.size()<=(n/2)-2){
            A.push_back(k);
            j=k+3;
            A.push_back(j);
            k=j+1;
        }
        k=2;
        j=1;
        while(B.size()<=(n/2)-2){
            B.push_back(k);
            j=k+1;
            B.push_back(j);
            k=j+3;
        }
        cout<<A.size()<<endl;
        for(int i:A) cout<<i<<" ";
        cout<<endl;
        cout<<B.size()<<endl;
        for(int i:B) cout<<i<<" ";
    }
    else{
        for(int i=1; i<n; i++){
            if(i%2!=0 && (i/2)%2==0){
                A.push_back(i);
                A.push_back(i+1);
            }
            else if(i%2!=0 && (i/2)%2!=0){
                B.push_back(i);
                B.push_back(i+1);
            }
        }
        B.push_back(n);
        cout<<A.size()<<endl;
        for(int i:A) cout<<i<<" ";
        cout<<endl;
        cout<<B.size()<<endl;
        for(int i:B) cout<<i<<" ";
    }
    return 0;
}