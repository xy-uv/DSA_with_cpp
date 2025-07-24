#include<iostream>
#include <climits>

using namespace std;

int findMin(int arr[],int size){
    int minx=INT_MAX;

    for(int i=0;i<size;i++){
        minx= min(arr[i],minx);
        // if(minx>arr[i]){
        //     minx=arr[i];
        // }
    }
    return minx;
}

int findMax(int nums[],int n){
    int maxy=INT_MIN;
    for(int i=0;i<n;i++){
        // if(maxy<nums[i]){
        //     maxy=nums[i];
        // }
        maxy=max(maxy,nums[i]);
    }
    return maxy;
}

int main(){
    int arr[99] = {
        81, 91, 22, 92, 15, 34, 67, 221, 73, 14,
        52, 19, 38, 45, 56, 60, 77, 83, 91, 24,
        64, 11, 13, 17, 20, 25, 30, 333, 36, 39,
        42, 44, 46, 487, 50, 52, 54, 58, 61, 63,
        657, 687, 780, 872, 74, 76, 79, 81, 874, 86,
        88, 790, 93, 95, 96, 99, 11, 82, 32, 42,
        76, 10, 12, 16, 168, 23, 276, 27, 28, 29,
        31, 32, 356, 37, 40, 41, 43, 470, 49, 51,
        53, 55, 57, 599, 62, 64, 66, 69, 71, 795,
        78, 80, 82, 85, 87, 899, 94, 96, 98
    };
    cout<<"Minimum value is: "<<findMin(arr,99)<<endl;
    cout<<"Maximum value is: "<<findMax(arr,99)<<endl;
}