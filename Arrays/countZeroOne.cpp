#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1};
    int size = 14;

    int one = 0;
    int zero = 0;

    for (int i = 0; i < size; i++){
        if(arr[i] == 1){
            one++;
        }

        if(arr[i] == 0){
            zero++;
        }
    }

    cout << "Number of ones : " << one << endl;
    cout << "Number of zeroes : " << zero;

    return 0;
}