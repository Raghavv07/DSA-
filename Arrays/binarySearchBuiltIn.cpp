#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    cout << "Enter the target : ";
    int target;
    cin >> target;

    if(binary_search(arr, arr + size, target)){
        cout << "Target Found";
    }

    else{
        cout << "Target Not Found";
    }

    return 0;
}