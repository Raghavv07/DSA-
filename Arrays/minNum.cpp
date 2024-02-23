#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {2, 4, 3, 6, 7, 8, 9};
    int size = 7;

    int minNum = INT32_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }

    cout<<"Minimum no. is : "<<minNum;

    return 0;
}