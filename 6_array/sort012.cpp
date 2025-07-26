#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout <<" " << arr[i] << " ";
    }
    cout << endl;
}


void sort012(int *arr, int n)
{
   int low=0;
   int mid=0;
   int high=n-1;

   while(mid<=high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }else if(arr[mid]==1){
        mid++;
    }else{
        swap(arr[mid],arr[high]);
        high--;
    }
   }
}

int main(){
    int arr1[6]={0, 1, 2, 2, 1, 0};
    int arr2[7]={0, 1, 2, 1, 2, 1, 2};
    int arr3[7]={2, 2, 2, 1, 1, 1, 0};
    int arr4[6]={2, 1, 2, 0, 1, 0};

    cout << "Original arr1: 0 1 2 2 1 0" << endl;
    sort012(arr1,6);
    cout << "Sorted arr1:";
    printArray(arr1,6);

    cout << "Original arr2: 0 1 2 1 2 1 2" << endl;
    sort012(arr2,7);
    cout << "Sorted arr2:";
    printArray(arr2,7);

    cout << "Original arr3: 2 2 2 1 1 1 0" << endl;
    sort012(arr3,7);
    cout << "Sorted arr3:";
    printArray(arr3,7);

    cout << "Original arr4: 2 1 2 0 1 0" << endl;
    sort012(arr4,6);
    cout << "Sorted arr4:";
    printArray(arr4,6);
}