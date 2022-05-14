#include<iostream>
#include<cstring>
using namespace std;

int main(){
    float arr[3] , max_num = -99999999;
    cin >> "enter the number: "
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        max_num = max(arr[i], max_num);
    }
    cout << max_num << endl;
}
