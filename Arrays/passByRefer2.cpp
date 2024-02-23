#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void change(int arr[], int size){
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printArr(arr, size);
}

int main(){
    int arr[] = {1, 2, 3};
    int size = 3;

    change(arr, size);
    printArr(arr, size);
    
    return 0;
}