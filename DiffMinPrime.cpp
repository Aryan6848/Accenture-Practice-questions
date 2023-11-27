#include<bits/stdc++.h>
using namespace std;

int diff(int n ){
    if(n%2 ==0 )
    return n-2;
    
    int val;
    if(n%3==0)
    return n-3;
    else{
        for(int i=5;i<=n;i+=6){
          if(n%i == 0){
            return n-i;
          }
          else if(n%(i+2)== 0){
            return n-(i+2);
          }
        }
    }
}
int main(){
    int n;
    cin>>n;

    cout<<diff(n);

}