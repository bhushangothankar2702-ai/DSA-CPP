#include<iostream>
using namespace std;
void reverse(int n){
   int revnum = 0;
   int original = n;
    while(n>0){
     int  last_digit = n%10;
      revnum = revnum * 10 + last_digit;
      n = n/10;
      
    }
    if(original == revnum){
        cout<<"It is Palidrome";
    }
    else{
        cout<<"Not a aplidrome";
    }
}
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    reverse(n);
}