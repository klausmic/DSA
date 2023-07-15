#include <iostream>
using namespace std;

int main(){
    int arr[6] = {5,6,8,7,2,1};
    int i, j;
    for (i = 1; i<6; i++){
        for (j=0; j< 6-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(i=0; i<6; i++){
        cout << arr[i];
    }
}