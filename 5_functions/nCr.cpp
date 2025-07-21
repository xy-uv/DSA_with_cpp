#include<iostream>

using namespace std;

int factorial(int num){
    int fct=1;
    for(int i=1;i<=num;i++){
        fct*=num;
    }
    return fct;
}

int nCr(int n,int r){
 int num=factorial(n);
 int denum=factorial(r)*factorial(n-r);
    return num/denum;
}

int main(){
    int n,r;
    cout<<"Enter the value of n & r: ";
    cin>>n>>r;
    int ncr= nCr(n,r);
    cout<<"The nCr answer is: "<<ncr<<endl;
}