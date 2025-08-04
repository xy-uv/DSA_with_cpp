#include<iostream>
using namespace std;

int getPivot(int array[],int n){
    int s=0,e=n-1;
    int m=s+(e-s)/2;

    while(s<e){
        if(array[m]>=array[0]){
            s=m+1;
        }else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return e;
}

int main(){
    int ar[5]={10,17,1,3,7};
    int arr[5]={1, 3, 8, 10, 17};

     cout << "Pivot is " << getPivot(ar, 5) << endl;
     cout << "Pivot is " << getPivot(arr, 5) << endl;
}
