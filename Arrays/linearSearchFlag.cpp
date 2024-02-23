#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 4, 5, 6};
    int size = 4;


    cout << "Enter the key to find : ";
    int key;
    cin >> key;

    bool flag = 0;

    for (int i = 0; i < size; i++){
        if(arr[i] == key){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }
}