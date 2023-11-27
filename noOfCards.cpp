#include<iostream>
using namespace std;

int main(){
    int level ;
    cin>>level;

    long long sum = (level*(level+1));
    sum = sum +((level-1)*(level))/2;
    cout<<sum;
}
