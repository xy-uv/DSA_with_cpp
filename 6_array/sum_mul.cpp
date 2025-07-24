#include<iostream>

using namespace std;

int doSum(int array[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=array[i];
    }
    return sum;
}

int doMulti(int ar[],int n){
    int mul=1;
    for(int i=0;i<n;i++){
        mul*=ar[i];
        cout<<mul<<endl;
    }
    return mul;
}

int main(){
 int arr[99] = {
        8, 9, 22, 92, 15, 34, 67, 221, 73, 14,
        5, 19, 38, 45, 56, 60, 77, 83, 91, 24,
        6, 11, 13, 17, 20, 25, 30, 333, 36, 39,
        42, 44, 46, 487, 50, 52, 54, 58, 61, 63,
        657, 687, 780, 872, 74, 76, 79, 81, 874, 86,
        88, 790, 93, 95, 967, 999, 1, 82, 3, 4,
        7, 10, 12, 16, 168, 23, 276, 27, 28, 29,
        31, 32, 356, 37, 40, 41, 43, 470, 49, 51,
        53, 55, 57, 599, 62, 64, 66, 69, 71, 795,
        78, 80, 82, 85, 87, 899, 94, 96, 988
    };
int nums[4] = {
        8, 9,11,13
        
    };

    cout<<"Sum of the total array are: "<<doSum(arr,99)<<endl;
    cout<<"Mul of the total array are: "<<doMulti(nums,4)<<endl;


} 