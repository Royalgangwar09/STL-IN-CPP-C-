#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    // for(int i=0; i<5; i++){
    //   cin>>a[i];
    // }
    array<int,4> b = {1,2,3,4};
    int size = b.size();
    for(int i=0; i<size; i++){
       cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd index -> "<<b.at(2)<<endl;
    cout<<"Empty or Not -> "<<b.empty()<<endl;
    cout<<"Print first value "<<b.front()<<endl;
    cout<<"Print last value "<<b.back()<<endl;
}