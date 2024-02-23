#include<iostream>
using namespace std;

int main(){
    int arr[50];
    int n;

    cout << "How many numbers you want to double : ";
    cin >> n;

    cout << "Enter the input values in array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Printing the double of input values in array : ";
    for (int i = 0; i < n; i++){
        cout << 2 * arr[i] << " ";
    }

    return 0;
}