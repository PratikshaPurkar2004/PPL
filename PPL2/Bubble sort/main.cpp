#include<iostream>
#include "sort.h"
using namespace std;

int main()
{
    Sort s(5);
    s.input();
    s.bubbleSort();
    s.display();
}