#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    int count = 0 ;

    for(int i = 0 ; i*i<=n;i++){
        if(n%i==0){
         count++;
            if((n/i != i)){
                  count++;
            }

            }
        }
  
    if(count == 2){
        cout<<"Prime";
   
    }
     else{
        cout<<"Not Prime";
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;


    prime(n);
}