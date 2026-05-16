#include<iostream>
#include "Exam.h"
#include<string>


using namespace std;

Exam::Exam(string t,string w)
{
    text=t;
    word=w;
}

void Exam :: input()
{
    cout<<"enter string=";
    getline(cin,text);
    cout<<"enter word";
    cin>>word;
}

bool Exam::check()
{
    return text.find(word)!=string::npos;
}