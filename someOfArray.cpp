#include<iostream>
using namespace std;    

int sum(int arr[], int size){
    int s = 0;

    for (int i=0; i<size; i++){
        s = s + arr[i];
    }
    return s;
}

int main(){
    int array[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    cout<<sum(array, size);
}