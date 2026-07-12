#include<bits/stdc++.h>
using namespace std;
bool isPalidrome(int start , int end , string str){

    if(start >= end){
        return true;


    }

    if(str[start] != str[end]){
        return false;
    }
        return isPalidrome(start+1,end-1,str);
    
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    if(isPalidrome(0,str.length()-1,str)){
        cout<<"Palidrome";
    }
    else{
        cout<<"Not Palidrome";
    }
}