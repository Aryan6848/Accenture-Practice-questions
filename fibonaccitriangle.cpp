#include<iostream>  
using namespace std;  

void print(int n){
    int a= 0;
    int b=1 ;
    int c;
    for(int i=1;i<=n;i++){
        cout<<b<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main()  
{  
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        print(i);
        cout<<endl;
    }
} 