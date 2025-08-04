#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
    int s=0,e=n;
    long long int m=s+(e-s)/2;

    int ans=-1;

    while(s<=e){
        long long int square= 1LL*m*m;
        if(square==n){
            return m;
        }
        if(square>n){
            e=m-1;
        }else{
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

double morePrecious(int n, int prc,int temps){
    double fc=1;
    double ans=temps;
    for(int i=0;i<prc;i++){
        fc/=10;
        for(double j=ans;j*j<n;j+=fc){
            ans=j;
        }
    }
    return ans;
}


int main(){
    long long int n;
    cout<<"Enter the number: ";
    cin>>n;
    long long int tempSol=sqrtInteger(n);
    cout<<"More precious solution is: "<<morePrecious(n,3,tempSol)<<endl;
}