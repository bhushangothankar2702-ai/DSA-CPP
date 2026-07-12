#include<iostream>
using namespace std;
int count(int n){
 int cnt = 0;
 while(n>0){
   int last_digit  = n%10 ;
   cnt = cnt + 1;
   n = n/10;

 }
 return cnt;
}
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;

cout<<count(n);
}