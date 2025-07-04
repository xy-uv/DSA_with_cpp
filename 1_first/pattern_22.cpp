#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int val=row;
        int space=row-1;
        while(space){
            cout<<"   ";
            space--;
        }
        int col=1;
        while(col<=(n-row+1)){
            cout<<" "<<val<<" ";
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
}