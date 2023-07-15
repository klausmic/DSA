#include <iostream>
using namespace std; 

void printArary(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << "  ";
    }
}

int swapAlternateArray(int arr[], int size){
    for (int i=0; i<size; i+=2){
        if(i+1 < size){
             swap(arr[i], arr[i+1]);
        }
    }
}


int main(){
    int arr[100];
    int size;

    cout<< "enter the size of the array : ";
    cin >> size;

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    swapAlternateArray(arr, size);
    printArary(arr, size);

   return 0;
}
