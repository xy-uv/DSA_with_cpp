#include<iostream>

using namespace std;

bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
   
   int n ;
    cout<<"Enter the number: ";
   cin >> n;
   if(isPrime(n)) {
        cout <<n<<" The number is a Prime number " <<endl;
   }
   else{
       cout<<n<<" The number is't a prime number "<<endl;
   }
}