#include<iostream>
using namespace std;
void armstrong(int n){
    int AN = 0;
    int original = n;
    while(n>0){
      int last_digit = n % 10;
      AN = AN + (last_digit * last_digit  * last_digit);
      n = n/10;
    }
    if(AN == original){
        cout<<"It is an Armstrong number";
    }
    else{
        cout<<"It is  not an Armstrong Number";
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;


 armstrong(n);
}
