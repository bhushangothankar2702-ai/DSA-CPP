#include<iostream>
using namespace std;
void print(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
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