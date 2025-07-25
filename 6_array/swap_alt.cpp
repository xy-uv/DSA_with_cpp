#include<iostream>

using namespace std;

void printArray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<array[i]<<" ";
    }cout<<endl;
}

void swapAlt(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8]={9,11,7,23,76,0,27,98};
    int odd[7]={76,8,9,22,91,89,33};

    swapAlt(even,8);
    swapAlt(odd,7);

    printArray(even,8);
    printArray(odd,7);
}