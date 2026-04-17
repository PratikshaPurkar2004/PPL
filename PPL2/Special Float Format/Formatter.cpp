#include<iostream>
#include "Formatter.h"
using namespace std;

Formatter::Formatter(string s)
{
    input=s;
}

string Formatter::format()
{
    int pos =input.find('.');
    string I=input.substr(0,pos);
    string F=input.substr(pos+1);

    if(F=="0")
        F="";

    while(F.size()>1 && F[0]=='0')//remove leading zeros
        F.erase(0,1);
    
    while(I.size()>1 && I[0]=='0')//remove leading zeros
        I.erase(0,1);

    while(I.size()>1 && I.back()=='0')//remove trailing zeros
        I.pop_back();

    int hashes=5-F.size();
    if(hashes<0) 
        hashes=0;
    string result=F;
    result+=string(hashes,'#');
    result+="."+I;
    return result;
}
