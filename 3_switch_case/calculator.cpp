#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of first number: ";
    cin>>a;
    cout<<"Enter the value of second number: ";
    cin>>b;
    char op;
    cout<<"Which operation you want to operand: ";
    cin>>op;

    switch(op){
        case '+': cout<<"A + B ="<<a+b<<endl;
        break;
        case '-': cout<<"A - B ="<<a-b<<endl;
        break;
        case '*': cout<<"A * B ="<<a*b<<endl;
        break;
        case '/': cout<<"A / B ="<<a/b<<endl;
        break;
        case '%': cout<<"A % B ="<<a%b<<endl;
        break;
        default: cout<<"Invalid operation"<<endl;
    }
}