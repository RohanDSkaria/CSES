#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; cin>>s;
    int n = s.length();
    int ans=0;
    int cnt=0;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            cnt++;
            ans=max(ans,cnt);
        }
        else cnt=0;
    }
    cout<<ans+1;
    return 0;
}