#include<iostream>
#include "MagicSquare.h"
using namespace std;

int magic[100][100];

void MagicSquare::generate(int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            magic[i][j]=0;

    int i=0,j=n/2;
    for(int num=1;num<=n*n;num++)
    {
        magic[i][j]=num;
        int newi=(i-1+n)%n;
        int newj=(j+1)%n;
        if(magic[newi][newj]!=0)
            i=(i+1)%n;
        else
        {
            i=newi;
            j=newj;
        }
    }
}

void MagicSquare::display(int n)
{
    cout<<"Magic Square:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<magic[i][j] <<"\t";
        cout<<endl;
    }
}

