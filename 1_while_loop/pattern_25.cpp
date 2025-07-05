#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=(n-row+1)){
            cout<<" "<<col<<" ";
            col++;
        }
        int xtr=2*row-2;
        while(xtr){
            cout<<" * ";
            xtr--;
        }
        int st=n-row+1;
        while(st){
            cout<<" "<<st<<" ";
            st--;
        }
        cout<<endl;
        row++;
    }
}