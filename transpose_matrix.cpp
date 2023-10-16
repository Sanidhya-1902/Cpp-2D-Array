/*
PRN - 22070123137
Transpose of Matrix
*/

#include<iostream>
using namespace std ;
int main()
{
    int mat[3][3];
    int a,b,i,j;
    cout<<"enter the elements of the matrix:";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"the matrix is:\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"the  transposed matrix is:\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<mat[j][i]<<" ";
        }
        cout<<"\n";
    }
} 
/*Output
the matrix is:
1 3 4
5 6 7
8 9 1
the  transposed matrix is:
1 5 8
3 6 9
4 7 1
*/
