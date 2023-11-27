#include<iostream>
using namespace std;

void segregate(int arr[],int n){
    
    int odd = 0;
    int eve = n-1;

    while(eve>odd ){
        
        while(arr[odd]%2==0 && odd<eve )
        {
            odd++;
        }

        while(arr[eve]%2 != 0 && eve>odd ){
            eve--;
        }
        
        cout<<arr[odd]<<" "<<arr[eve]<<endl;
        if(eve>odd){
        swap(arr[odd], arr[eve]);
        }
        odd++;
        eve--;
        

    }
}
int main(){
    int n ;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    segregate(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}