#include<iostream>
using namespace std;

int main(){
    int a=9;
    if(a==9){
        cout<<"NINEY"<<endl;
    }

    if(a>0){
        cout<<"POSITIVE"<<endl;
    } else {
        cout<<"NEGATIVE"<<endl; 
    }
    int x=2;
    int y=x+1;
    if((x=3)==y){
        cout<<x<<endl;
    }else{
        cout<<x+1<<endl;
    }

    int xy=24;

    if(xy>20){
        cout<<"LOVE"<<endl;
    }else if(xy==24){
        cout<<"LOVELY"<<endl;
    }else{
        cout<<"BABBAR"<<endl;
    }

    cout<<xy<<endl;
}   