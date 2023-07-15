#include<iostream>
using namespace std;


int selection(int arr[], int n){
    for (int i = 0; i <= n-1; i++){
        int minIndex = arr[i];
        
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex] ){
                minIndex = arr[j];
            }
        }
        cout << swap(arr[minIndex], arr[i])<< " ";
    }
}


int main(){
    int arr[6] = {2, 1, 5, 4, 9, 7};
 
     selection(arr, 6);
    

}