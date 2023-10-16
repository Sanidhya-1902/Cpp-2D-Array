/*
PRN - 22070123137
Comparing elements of two Matrix
*/

#include <iostream>
using namespace std;
int main()
{
    int r, c, arr[50][50], sum[50][50], i, j;

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
 
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
         if (i=j)
         {
            sum[i][j] = sum[i][j] + arr[i][j];
    }
     cout << endl << "Sum of diagonal elements is: " << endl;
            cout << sum[i][j]<<" ";   
           cout<<"\n";
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Get the dimensions (rows and cols) of the matrix
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Declare the matrix
    int matrix[rows][cols];

    // Input elements of the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Initialize a boolean variable to track if the rows are equal
    bool rowsEqual = true;

    // Compare elements of the first row to the second row
    for (int i = 0; i < cols; i++) {
        if (matrix[0][i] != matrix[1][i]) {
            rowsEqual = false;
            break;
        }
    }

    // Display the result based on whether the rows are equal or not
    if (rowsEqual) {
        cout << "The elements of the first row are equal to the corresponding elements of the second row." << endl;
    } else {
        cout << "The elements of the first row are not equal to the corresponding elements of the second row." << endl;
    }

    return 0;
}
/*Output
Enter the number of rows and columns: 2
2
Enter elements of the matrix:
1 2
1 2
The elements of the first row are equal to the corresponding elements of the second row.
*/
