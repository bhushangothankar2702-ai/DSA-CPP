#include<bits/stdc++.h>
using namespace std;
void print(int i , int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    print(i-1,sum+i);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    print(n,0);
}