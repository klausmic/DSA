#include<iostream>
using namespace std;


int firstOccr(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end){
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccr(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end){
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int  main(){
    int arr[9] = {1, 5, 5, 6, 8, 9, 9, 9, 9};

    cout << "First Occurence is : " << firstOccr(arr, 9, 9) << endl;
    cout << "last Occurence is : " << lastOccr(arr, 9, 9);

}