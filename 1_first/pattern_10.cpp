#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    char st='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<" "<<st<<" ";
            st++;
            col++;
        }
        cout<<endl;
        row++;
    }
}