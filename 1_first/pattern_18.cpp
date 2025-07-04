#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;

    while(row<=n){
        int stars=n-row+1;
        int col=1;
        while(col<=stars){
            cout<<" "<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

}