#include<iostream>
using namespace std;
int reverse(int n){
   int revnum = 0;
    while(n>0){
     int  last_digit = n%10;
      revnum = revnum * 10 + last_digit;
      n = n/10;
    }
 return revnum;
}
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;


    cout<<reverse(n);
}