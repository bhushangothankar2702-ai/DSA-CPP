#include<bits/stdc++.h>
using namespace std;
int sorted(int arr[],int n){
    for(int i = 1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
        return true;
    }
    
}
int main(){
    int arr[1000] , n;
    cout<<"Enter size: ";
    cin>>n;

    for(int i = 1;i<n;i++){
       cin>> arr[i];
    }
    sorted(arr,n);
}