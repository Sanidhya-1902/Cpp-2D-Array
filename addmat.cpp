/*
PRN - 22070123137
Addition of Matrix
*/

#include <iostream>
using namespace std;

int main()
{
    int r, c, arr[50][50], arr1[50][50], sum[50][50], i, j;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element " << i + 1 << j + 1 << " : ";
           cin >> arr[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element " << i + 1 << j + 1 << " : ";
           cin >> arr1[i][j];
       }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = arr[i][j] + arr1[i][j];
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j]<<" ";
          
        }
           cout<<"\n";
    }
    return 0;
}

/*
OUTPUT:
Enter number of rows: 2
Enter number of columns: 2
Enter elements of 1st matrix: 
Enter element 11 : 1
Enter element 12 : 2
Enter element 21 : 4
Enter element 22 : 8
Enter elements of 2nd matrix: 
Enter element 11 : 45
Enter element 12 : 65
Enter element 21 : 78
Enter element 22 : 95
Sum of two matrix is: 
46 67 
82 103 
*/
