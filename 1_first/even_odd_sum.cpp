#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=2,sum=0;
    
    while(i<=n){
        sum+=i;
        cout<<sum<<endl;
        i+=2;
    }
    cout<<"Sum of 0 t "<<n<<" th even number is: "<<sum<<endl;
}