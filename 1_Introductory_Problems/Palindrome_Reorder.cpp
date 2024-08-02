#include <iostream>
#include <string>
using namespace std;
int main(){
    string a; cin>>a;
    string b;
    string left;
    string right;
    string single;
    string c {"QWERTYUIOPASDFGHJKLZXCVBNM"};
    int tc=0;
    int g=0;
    for(int i=0; i<26; i++){
        string temp;
        int cnt=0;
        for(char j:a) if(c[i]==j) cnt++;
        int k=0;
        while(k<cnt/2){
            temp += c[i];
            k++;
        }
        if(cnt==1) tc++;
        if(cnt%2!=0){
            if(g==1) tc+=100;
            single += c[i];
            tc++;
            g++;
        }
        left += temp;
        right = temp + right;
    }
    if(tc>2) cout<<"NO SOLUTION";
    else cout<<(left+single+right);
    return 0;
}