#include<iostream>
using namespace std; 

bool search(int arr[], int size, int key){
    for (int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[50];
    int size, key;

    cout << "Enter the size of the Array : "<<endl;
    cin >> size;

    for (int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Enter the key you want to search : ";
    cin >> key  ;
    cout << endl;

    bool found = search(arr, size, key);

    if(found ){
        cout << "The key is present "<< endl;
    }else{
        cout << "The key is absent";
    }



    


}