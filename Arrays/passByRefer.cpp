#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void incre(int arr[], int size){
    arr[0] = arr[0] + 10;

    printArray(arr, size);
}

int main(){
    int arr[] = {5, 6};
    int size = 2;

    printArray(arr, size);
    incre(arr, size);

    return 0;
}