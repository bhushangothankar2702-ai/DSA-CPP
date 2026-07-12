#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){  //for rows
        for(int j=1;j<=n-i;j++){   //space
            cout<<" ";
        }
        
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main(){
int n;
cout<<"Enter number: ";
cin>>n;
print(n);
}