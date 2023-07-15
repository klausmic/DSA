#include <iostream>
using namespace std; 

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while(start <= end){
        if(arr[mid] == key ){
            return mid;
        }

        if (key > arr[mid]){
            start = mid + 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int arr[5] = {12, 14, 19, 52, 96};
    
    int key;


    cout << "Enter the key you want to search ; ";
    cin >> key;

    int index = binarySearch(arr, 5, key);
    cout << "The key " << key << " is in "<< index;

    
}