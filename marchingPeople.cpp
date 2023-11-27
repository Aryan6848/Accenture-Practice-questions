#include<bits/stdc++.h>
using namespace std;

int peopleStop(int arr[][3], int n ){
    set<int>s;

    for(int i=0;i<n;i++){
        for(int j=arr[i][0];j<= arr[i][0]+arr[i][2];j++)
        {
           s.insert(j);
        }
    }

    return s.size();
}



int main(){
    int n;
    cin>>n;
    int arr[n][3];

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<"barrier"<<i+1<<": ";
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

     cout<< peopleStop(arr, n);
}