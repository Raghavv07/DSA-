#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {2, 4, 3, 6, 7, 8, 9, 0};
    int size = 8;

    int maxNum = INT32_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }

    cout<<"Maximum no. is : "<<maxNum;

    return 0;
}