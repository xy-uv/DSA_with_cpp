#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number of pattern level : ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" * ";
            j++;
        }
        cout << endl;
        i++;
    }
}