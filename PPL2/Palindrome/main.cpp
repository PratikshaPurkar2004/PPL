#include<iostream>
#include "Palindrome.h"
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    Palindrome p(str);
    if(p.isPalindrome())
        cout<<str<<" is a palindrome.";
    else
        cout<<str<<" is not a palindrome."; 
}