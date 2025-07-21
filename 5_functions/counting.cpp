#include<iostream>

using namespace std;

void counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}


int main(){
    int cn;
    cout<<"Enter the value range of you want to print: ";
    cin>>cn;
    counting(cn);
}