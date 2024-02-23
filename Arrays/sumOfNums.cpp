#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int sum = 0;
    int size = 10;

    cout << "The num is index 5 is : " << arr[5] << endl;

    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    cout << "The sum is : " << sum << endl;

    return 0;
}