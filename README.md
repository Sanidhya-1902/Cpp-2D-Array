# C++ 2D Arrays

This repository contains examples and explanations of 2D arrays in C++. 2D arrays are collections of elements arranged in rows and columns, forming a grid-like structure. This README provides an overview of how to work with 2D arrays in C++.

## Table of Contents
- [2D Arrays](#2d-arrays)
  - [Declaration and Initialization](#declaration-and-initialization)
  - [Accessing Elements](#accessing-elements)
  - [Iterating through a 2D Array](#iterating-through-a-2d-array)
- [Algorithm](#algorithm)
- [Output](#output)

## 2D Arrays

### Declaration and Initialization

In C++, 2D arrays are declared and initialized as follows:

```cpp
dataType arrayName[rows][columns]; // Declaration
```

Example:

```cpp
int matrix[3][4]; // Declares a 3x4 integer matrix

int grid[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Declares and initializes a 2x3 integer matrix
```

### Accessing Elements

You can access individual elements in a 2D array using their row and column indices:

```cpp
int value = matrix[1][2]; // Accesses the element in the second row and third column of the 'matrix' array
```

### Iterating through a 2D Array

You can use nested loops, such as two `for` loops, to iterate through the elements of a 2D array:

```cpp
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
        // Access and work with array elements using 'arrayName[i][j]'
    }
}
```
## **ALGORITHM**

- **Take matrix input from user and display it**

1.We first get the number of rows and columns from the user.

2.We then declare a 2D array (matrix) with the specified dimensions.

3.We use nested loops to iterate through the matrix and input the elements from the user.

4.Finally, we use another set of nested loops to display the matrix.

5.Compile and run this C++ program, and it will take matrix input from the user and display it on the screen.

- **Addition of matrix**
  
1. Start

2. Declare variables for the number of rows and columns for the matrices (let's call them rows and cols).

3. Get the dimensions (rows and cols) of the matrices from the user.

4. Declare two 2D arrays (matrices) of size rows x cols: matrix1 and matrix2.

5. Input the elements of matrix1 and matrix2 from the user using nested loops.

6. Declare another 2D array (resultMatrix) of the same size (rows x cols) to store the result.

7. Perform matrix addition using nested loops:
   - For each element at position (i, j) in resultMatrix:
     - resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j]

8. Display the resultMatrix, which contains the sum of the two matrices.

9. End

- **Multiplication of Matrix**

1. Start

2. Declare variables for the number of rows and columns for the first matrix (matrix1Rows, matrix1Cols) and the second matrix (matrix2Rows, matrix2Cols).

3. Get the dimensions (rows and columns) of matrix1 and matrix2 from the user.
   
4. Check if matrix1Cols is equal to matrix2Rows. If not, exit the program with an error message because matrix multiplication is not possible.

5. Declare three 2D arrays:
   - matrix1 of size matrix1Rows x matrix1Cols
   - matrix2 of size matrix2Rows x matrix2Cols
   - resultMatrix of size matrix1Rows x matrix2Cols

6. Input the elements of matrix1 and matrix2 from the user using nested loops.

7. Perform matrix multiplication using three nested loops:
   - For each element at position (i, j) in resultMatrix:
     - Initialize resultMatrix[i][j] to 0.
     - Perform the dot product of the ith row of matrix1 and the jth column of matrix2 to calculate resultMatrix[i][j].

8. Display the resultMatrix, which contains the product of the two matrices.

9. End

- **Diagonal Addition**

1. Start

2. Declare variables for the number of rows and columns of the matrix (rows and cols).

3. Get the dimensions (rows and cols) of the matrix from the user.

4. Declare a 2D array (matrix) of size rows x cols to store the matrix elements.

5. Input the elements of the matrix from the user using nested loops.

6. Initialize a variable (diagonalSum) to 0. This variable will store the sum of the diagonal elements.

7. Use a loop to iterate through the diagonal elements of the matrix:
   - For each element at position (i, i), add matrix[i][i] to diagonalSum.

8. Display the value of diagonalSum, which contains the sum of the diagonal elements.

9. End

- **Transpose of Matrix**

1. Start

2. Declare variables for the number of rows and columns of the original matrix (rows and cols).

3. Get the dimensions (rows and cols) of the original matrix from the user.

4. Declare a 2D array (originalMatrix) of size rows x cols to store the original matrix elements.

5. Input the elements of the original matrix from the user using nested loops.

6. Declare a new 2D array (transposeMatrix) of size cols x rows to store the transposed matrix.

7. Use nested loops to copy the elements from the original matrix to the transposed matrix with swapped rows and columns:
   - For each element at position (i, j) in the original matrix, assign originalMatrix[i][j] to transposeMatrix[j][i].

8. Display the transposed matrix (transposeMatrix).

9. End

- **Campare elements of first row to the second row**

1. Start

2. Declare variables for the number of rows and columns of the matrix (rows and cols).

3. Get the dimensions (rows and cols) of the matrix from the user.

4. Declare a 2D array (matrix) of size rows x cols to store the matrix elements.

5. Input the elements of the matrix from the user using nested loops.

6. Initialize a boolean variable (rowsEqual) to true. This variable will be used to track if the elements of the first row are equal to the corresponding elements of the second row.

7. Use a loop to compare the elements of the first row to the second row:
   - For each column index (i) from 0 to cols-1:
     - If matrix[0][i] is not equal to matrix[1][i], set rowsEqual to false and break out of the loop.

8. If rowsEqual is true, display a message indicating that the two rows are equal. Otherwise, display a message indicating that the two rows are not equal.

9. End

### **OUTPUT**

- **Take matrix input from user and display it**
  

![exp8_1](https://github.com/Purvansha022609/2D-Array/assets/139473344/c62500f9-3eda-4736-a85b-8e1b7c00aaa8)


- **Addition of matrix**

  
![exp8_2](https://github.com/Purvansha022609/2D-Array/assets/139473344/c220224d-2869-4ff9-9ef5-b55fe5bc8ea3)

- **Multiplication of Matrix**

![Exp8_3](https://github.com/Purvansha022609/2D-Array/assets/139473344/37aff92d-f199-401b-b678-1f44030cffc5)

- **Diagonal Addition**

![exp8_4](https://github.com/Purvansha022609/2D-Array/assets/139473344/d2f76065-dff4-4c53-98e9-aaa679e62445)

- **Transpose of Matrix**


![exp8_5](https://github.com/Purvansha022609/2D-Array/assets/139473344/42559439-19ad-409c-9e65-e76cd75a3899)


- **Campare elements of first row to the second row**

![exp8_6](https://github.com/Purvansha022609/2D-Array/assets/139473344/3a8fc90c-0bf3-497c-88f5-e1b7caa5e58e)
