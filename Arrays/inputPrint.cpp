#include<iostream>
using namespace std;

int main(){
    int arr[5];

    cout << "Enter the input values in array : ";
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Printing the input values of array : ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}