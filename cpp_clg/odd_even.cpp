#include<iostream>
using namespace std;
bool isEven(int n);

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << n << " is";
    isEven(n) ? cout << " Even" : cout << " Odd";
    cout << endl;
    return 0;
}

bool isEven(int n)
{
    // dividing and multiplying by 2 

    return ((n / 2) * 2 == n);
}
