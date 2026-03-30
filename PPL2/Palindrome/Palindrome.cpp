#include<iostream>
#include <algorithm>
#include <cctype>
using namespace std;
#include "Palindrome.h"

Palindrome::Palindrome(string s)
{
    str=s;
}

bool Palindrome::isPalindrome()
{
    string cleaned="";
    for(char ch :str)
    {
        if(!isspace(ch))
        {
            cleaned+=tolower(ch);
        }
    }
    string reversed=cleaned;
    reverse(reversed.begin(),reversed.end());
    return cleaned==reversed;
    // int left=0;
    // int right=cleaned.length()-1;
    // while(left<right)
    // {
    //     if(cleaned[left]!=cleaned[right])
    //     {
    //         return false;
    //     }
    //     left++;
    //     right--;
    // }
}

