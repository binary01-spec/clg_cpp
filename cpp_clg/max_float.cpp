#include<iostream>
#include<cstring>
using namespace std;

int main(){
    float arr[3];
    float max_float;
    cout << "enter the number: " << endl;
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    max_float = arr[0];
    for(int i = 1; i < 3 ; i++){
        if((max_float) < arr[i]){
            max_float = arr[i];
        }
    }
    cout << max_float << " is the largest";
    
}
