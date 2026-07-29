#include<bits/stdc++.h>
using namespace std;
int removeduplicate(int arr[],int n)
{
    int j  = 0;
    for(int i = 1;i<n;i++)
    {
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}
int main()
{
    int arr[100] , n;

    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter sorted array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int newsize = removeduplicate(arr,n);
     for(int i =0;i<newsize;i++)

   {
     cout<<arr[i]<<" " ;
    }
    return 0;

}