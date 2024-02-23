#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout << "The address of a is : " << &a << endl;
    cout << "size of a is : " << sizeof(a) << endl;

    int arr[5];
    cout << "The Base address of arr is : " << &arr << endl;

    cout << "Without & the address of arr is : " << arr;

    return 0;
}