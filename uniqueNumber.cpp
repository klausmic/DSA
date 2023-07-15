#include<iostream>
using namespace std;

int uniqueNumber(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[100];
    int size;

    cout << "Enter the Size of the array : ";
    cin >> size;

    for (int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << uniqueNumber(arr, size);
}