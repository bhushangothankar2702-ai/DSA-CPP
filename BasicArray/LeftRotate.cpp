//Left rotate an array by one place

#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n){
    int temp = arr[0];
    for(int i = 1 ; i<n ; i++){
        arr[i-1] = arr[i];

    }
    arr[n-1] = temp;

}
int main(){
    int arr[1000];
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

     arr[n];

    cout<<"Enter elements of the array: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    rotate(arr,n);

    for(int i =0;i<n;i ++)

   { cout<<arr[i]<<" ";}
}