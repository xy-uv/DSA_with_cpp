#include<iostream>

using namespace std;

int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}

int main(){

    int x,y;
    cout<<"Enter the value of x,y: ";
    cin>>x>>y;
    int ans= power(x,y);
    cout<<"Power of "<<x<<" ^ "<<y<<" = "<<ans<<endl;
}