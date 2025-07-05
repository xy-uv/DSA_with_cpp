#include<iostream>
using namespace std;

int main(){
    cout<<"***F***"<<"\t\t"<<"***C***"<<endl;
    double fr=0;
    while(fr<=212){
        double cl=(fr-32.0)*5.0/9;
        cout<<fr<<"\t\t"<<cl<<endl;
        fr+=10;
    }
}