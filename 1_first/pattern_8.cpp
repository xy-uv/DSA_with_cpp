#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while (col<=n)
        {
            char ch= 'A'-1+row;
            cout<<" "<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
        
    }
}