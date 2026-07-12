#include<bits/stdc++.h>
using namespace std;
void number(int n , int i){
    if(i>n){
        return; //Base codition
    }

    cout<<n<<endl;
    number(n-1,i);
}
int main(){
    int n;
    cin>>n;

    number(n,1);
    return 0;
}