#include<iostream>

using namespace std;

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<" "<<array[i]<<" ";
    }
    cout<<endl;
}

void reverse(int nums[],int n){
    int start=0;
    int end=n-1;
   while(start<=end){
    swap(nums[start],nums[end]);
    start++;
    end--;
   }
}

int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}