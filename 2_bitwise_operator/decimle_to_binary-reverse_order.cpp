#include<iostream>
// #include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans=0,i=0,pow10=1;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow10)+ans;
        n=n>>1;
        i++;
        pow10*=10;
    }
    cout<<ans<<endl;
}

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int ans=0,i=0;
//     while(n!=0){
//         int bit=n&1;
//         ans=(bit*pow(10,i))+ans;
//         cout<<ans<<endl;
//         n=n>>1;
//         i++;
//     }
//     cout<<ans<<endl;
// }