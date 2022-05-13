#include <iostream>
using namespace std;
// a leap year should multiple of 400
// the year is multiple of 4 and not multiple of 100
int isleapYear(int year);
int main(){
    int year;
    cout << "enter the year : ";
    cin >> year;
    
    // ternary if else
    isleapYear(year) ? cout << "Leap year": cout << "Not a leap year"; 
    return 0;
}

int isleapYear(int year)
{   
    //checking the leap year conditions
    if ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0)) 
    {
        return true;
    }
    return false;
}