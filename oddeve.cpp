#include<bits/stdc++.h>
using namespace std;


void solve(int* arr, int n){

    vector<int> eve;
    int evesize=0;
    int oddsize=0;
    vector<int> odd;

    for(int i= 0 ;i< n;i++){
        if(i%2== 0){
        eve.push_back(arr[i]);
        evesize++;
        }
        else{
            odd.push_back(arr[i]);
            oddsize++;
        }
    }
    sort(eve.begin(),eve.end());
    sort(odd.begin(),odd.end());

    cout<<eve[evesize-2]+odd[oddsize-2];
}
int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for(int i =0;i< n;i++){
        cin>>arr[i];
    }

    solve(arr, n);
}