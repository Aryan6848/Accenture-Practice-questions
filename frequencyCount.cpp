#include<bits/stdc++.h>
using namespace std;

void modify(string &s){
    
    int ch[256] ={0};
    for(int i=0;i<s.length();i++){
        ch[s[i]]++;
    }
    
    string ans ="";
    for(int i=0;i<256;i++){
        if(ch[i]!=0){
            cout<<i<<" "<<ch[i]<<" "<<char(i)<<endl;
            ans = ans+char(i)+to_string(ch[i]);
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