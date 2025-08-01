#include<iostream>
using namespace std;

int firstOccurrence(int array[],int n,int k){
    int ans=-1,s=0,e=n-1;
    int m=s+(e-s)/2;

    while(s<=e){
        if(k==array[m]){
            ans=m;
            e=m-1;
        }else if(k<array[m]){
            e=m-1;
        }else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int lastOccurrence(int array[],int n,int k){
    int ans=-1,s=0,e=n-1;
    int m=s+(e-s)/2;

    while(s<=e){
        if(k==array[m]){
            ans=m;
            s=m+1;
        }else if(k<array[m]){
            e=m-1;
        }else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[11]={0, 0, 1, 1, 2, 2, 2, 2,3,4,7};
    cout<<"First Occurrence is: "<<firstOccurrence(arr,11,7)<<endl;
    cout<<"Last Occurrence is: "<<lastOccurrence(arr,11,7)<<endl;
}