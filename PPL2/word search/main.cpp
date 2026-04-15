#include<iostream>
#include "wordSearch.h"
using namespace std;

int main()
{
    string text,word;
    cout<<"Enter the text::";
    getline(cin,text);
    cout<<"Enter the word to search::";
    cin>>word;

    wordSearch ws(text,word);
    if(ws.search())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}