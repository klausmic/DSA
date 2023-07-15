#include<iostream>
using namespace std;

int main(){
  int  count = 0;
  int n, i, j;
  
  cout << "Enter the range : ";
  cin >> n;

  for ( i= 1; i<=n; i++);{
    count = 0;
    for ( j=2; j<=i/2; i++){
        if(i%j == 0){
            count++;
            break;
        }
    }
    if(count == 0 || j != 1 ){
        cout << j;

    }
  }
}