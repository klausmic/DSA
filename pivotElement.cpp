// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

int pivot(int arr[],int  n){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    int pivote = -1;
    while(s<e){
        if(arr[mid] < arr[mid+1]){
        pivote = mid;
    }
    else{
        s = mid + 1;
    
        }
        mid = s + (e -s)/2;
    }
    return pivote;
}
int main() {
    // Write C++ code here
    int arr[5] = {7, 9, 1, 2, 3};
    int p = pivot(arr, 5);
    cout << p;

    return 0;
}