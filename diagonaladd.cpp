/*
PRN - 22070123137
Diagonal Addition of Matrix
*/

#include <iostream>
using namespace std;
 
int main()
{
  int matrix[3][3];
  int sum_left =0, sum_right = 0;
  cout << "Enter elements into the matrix \n";

  //Taking input into the Matrix and 
  //Adding if they are diagonal elements
  for(int i=0; i<3 ; i++){
    for(int j=0; j<3; j++){
      cin >> matrix[i][j];
      if(i==j)
        sum_left += matrix[i][j];
      if((i+j) == 2)
        sum_right += matrix[i][j];
    }
  }

  cout << "Sum of Left Diagonal: "<< sum_left << endl;
  cout << "Sum of Right Diagonal: "<< sum_right << endl;

  return 0;
}
/*
Output
Enter elements into the matrix 
1 3 4
5 6 7
8 9 1
Sum of Left Diagonal: 8
Sum of Right Diagonal: 18
*/
