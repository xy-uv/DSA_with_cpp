#include<iostream>

using namespace std;

bool isEven(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(isEven(num)){
        cout<<"Number is an EVEN number"<<endl;
    }else{
        cout<<"Number is an ODD number"<<endl;
    }
}