#include<bits/stdc++.h>
using namespace std;
int print(int n){
    if(n == 1){
        return 1;
    }
    return n * print(n-1);    // Factorial Condition
}
int main(){
    int n; cout<<"Enter a n: ";
    cin>>n;

    cout<<print(n);
}