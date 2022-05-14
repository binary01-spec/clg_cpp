#include<iostream>
#include<cstring>
using namespace std;
int max_num(int x, int y);

int main()
{
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << max_num(x, y) << " is largest";
}

int max_num(int x, int y){
    return (x > y) ? x : y;
}
