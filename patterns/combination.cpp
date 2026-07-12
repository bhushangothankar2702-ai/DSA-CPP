#include<iostream>
using namespace std;
int main(){
int n , r ;
cout<<"Enter n: "<<endl;
cin>>n;
cout<<endl;
cout<<"Enter r: ";
cin>>r;
int a=1;
for(int i=1;i<=n;i++){
    a*=i;
    cout<<a<<endl;
}
int b =1;
for(int i=1;i<=r;i++){
    b*=i;
     cout<<b<<endl;
}
int c = 1;
for(int i=1;i<=n-r;i++){
    c*=i;
     cout<<c<<endl;
}
cout<<a/(b*c)<<endl;
}