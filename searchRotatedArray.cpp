#include <iostream>
using namespace std;

int pivotArray(int arr[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        const int mid = s + (e - s)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int s,int e, int k){
  

    while(s < e){
        int mid = s + (e - s)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}



int main(){
    int arr[5] = {7, 9, 1, 2, 3};
    int k = 9;
    int p = pivotArray(arr, 5);
    if(k >= arr[p] && k <= arr[5-1]){
        return binarySearch(arr, p, 5-1, k);
    }
    else{
        return binarySearch(arr, 0, p-1, k);
    }
}