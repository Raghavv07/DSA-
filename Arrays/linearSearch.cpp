#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if (arr[i] == key)
        return true;
    }
    return false;
}

int main(){
    int arr[] = {2, 3, 4, 6, 7, 8, 5};
    int size = 7;
    int key;

    cout<<"Enter the key to find : ";
    cin>>key;

    if(find(arr, size, key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}