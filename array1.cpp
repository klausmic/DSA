#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<"  "<<endl;
    }
}

int main(){
    int array[8];
   printArray(array, 8); 
   cout<<sizeof(array)/sizeof(int);
         
}