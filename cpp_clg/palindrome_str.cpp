#include <bits/stdc++.h> // std++.h this invcludes all  standard library
using namespace std;

string isPalindrome(string S);

int main()
{
    string S;
    cout << "text : ";
    cin >> S;
    cout << isPalindrome(S);
 
    return 0;
}

// Function to check whether the string is palindrome
string isPalindrome(string S)
{

    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    if (S == P) {
        return "Yes";
    }
   
    else {
        return "No";
    }
}