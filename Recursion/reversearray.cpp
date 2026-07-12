#include<bits/stdc++.h>
using namespace std;
void print(int arr[] ,int i , int r){
    if(i>=r){
        return;
    }
    swap(arr[i] , arr[r]);
    print(arr,i+1 , r-1);
}
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    print(arr,0,n-1);

    cout<<"Reversed array is:";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" " ;
    }

   
}