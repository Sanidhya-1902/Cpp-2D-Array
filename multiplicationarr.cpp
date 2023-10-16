/*
PRN - 22070123137
Multiplication of Matrix
*/

#include <iostream>
using namespace std;

int main()
{
    int a[50][50], b[50][50], mult[50][50], r1, c1, r2, c2, i, j, p;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    while (c1!=r2)
    {
        cout << "Error! Column of first matrix not equal to row of second. Multiplication not possible.";
       
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(p = 0; p < c1; ++p)
            {
                mult[i][j] += a[i][p] * b[p][j];
            }
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    {
    for(j = 0; j < c2; ++j)
    {
    cout << mult[i][j]<<" ";    
        }
           cout<<"\n";
    }

    return 0;
}

/*
Output:
Enter rows and columns for first matrix: 2 3
Enter rows and columns for second matrix: 3 2
Enter elements of matrix 1:
Enter element a11 : 1
Enter element a12 : 2
Enter element a13 : 3
Enter element a21 : 4
Enter element a22 : 5
Enter element a23 : 6
Enter elements of matrix 2:
Enter element b11 : 10
Enter element b12 : 12
Enter element b21 : 13
Enter element b22 : 14
Enter element b31 : 15
Enter element b32 : 16
Output Matrix: 
81 88 
195 214 
*/
