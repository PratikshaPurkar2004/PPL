#include<iostream>
#include "exam.h"
using namespace std;

int main()
{
   string text,word;
   Exam e(text,word);
    e.input();
   if(e.check())
    cout<<"yes"<<endl;
else
    cout<<"no";
    return 0;
}