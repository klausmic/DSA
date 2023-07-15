#include<iostream>
using namespace std;

int isElement(int arr[][3], int key, int m, int n ){
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             if(arr[i][j] == key){
        return 1;
    }
    
        }
    }
   return 0;
}

int main(){
    int arr[3][3];
    
    cout << "Enter the elements in the array : ";
    //inserting elements in the array.
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    //output
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Enter the element to search : ";
    int key;
    cin >> key;

    if(isElement(arr, key, 3, 3)){
        cout << "element found";
    }else{
        cout<<"not found";
    }


}