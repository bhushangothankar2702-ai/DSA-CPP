#include<bits/stdc++.h>
using namespace std;
vector<int>divisors(int n){
    vector<int>v;
    for(int i = 1; i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
             if(i!=n/i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin() , v.end());
    return v;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>ans = divisors(n);
    for(int x : ans)
    cout<<x<<" ";
    return 0;
}