#include<iostream>
using namespace std;


// void moveZeroes(int arr[],int n){
//     for(int i=0;i<n;i++){

//         if(arr[i] == 0){
//            for(int j=i+1;j<n;j++){
//             if(arr[j]!=0){
//                 swap(arr[i],arr[j]);
//                 break;
//             }
//            }
//         }
//     }
// }

// O(n) approach
void moveZeroes(int arr[],int n){
    int j=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }

    // for(int i = j;i<n;i++){
    //     arr[i]=0;
    // }
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    moveZeroes(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}