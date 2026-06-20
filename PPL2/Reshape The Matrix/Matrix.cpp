#include<iostream>
#include "Matrix.h"
using namespace std;

void Matrix::input()
{
    cout<<"enter rows and cols::";
    cin>>rows>>cols;
    mat.resize(rows,vector<int>(cols));
    cout<<"enter matrix elements::\n";
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin>>mat[i][j];
}

void Matrix::display()
{
    cout<<"Reshape matrix::\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout<<mat[i][j] <<" ";
        cout<<" \n";
    }
}


// void Matrix::reshape(int r,int c)
// {
//     if(rows * cols != r * c)
//     {
//         cout<<"Reshape not possible\n";
//         return;
//     }

//     vector<vector<int>> temp(r, vector<int>(c));

//     int a=0,b=0;

//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         {
//             temp[a][b] = mat[i][j];

//             b++;

//             if(b==c)
//             {
//                 a++;
//                 b=0;
//             }
//         }
//     }

//     mat = temp;
//     rows = r;
//     cols = c;
// }



void Matrix::reshape(int r,int c)
{
    if(rows * cols != r * c)
    {
        cout<<"Reshape not possible\n";
        return;
    }

    vector<vector<int>> temp(r, vector<int>(c));

    for(int i=0;i<rows*cols;i++)
    {
        temp[i/c][i%c] = mat[i/cols][i%cols];
    }

    mat = temp;
    rows = r;
    cols = c;
}