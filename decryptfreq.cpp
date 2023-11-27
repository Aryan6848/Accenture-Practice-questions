#include<bits/stdc++.h>
using namespace std;

 void modify(string &s){
    
    string ans ="";
    for(int i=1;i<s.length();i+=2){
           int count = s[i]-'0';
           while(count--){
            ans = ans+s[i-1];
           }    
    }
    s= ans;
}

int main(){
    string s;
    cin>>s;

    modify(s);
    cout<<s;
    
}