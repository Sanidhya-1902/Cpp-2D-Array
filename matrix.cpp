/*
PRN - 22070123137
Display Matrix
*/


#include <iostream>
using namespace std;
int main() 
{
    int mat[3][3];
    cout<< "Enter elements: "<<endl;
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j <3; j++)
         {
            cin>>mat[i][j];
        }
     }
    cout<<"The array is: "<<endl;
         for (int i = 0; i <3; i++) 
    {
        for (int j = 0; j <3; j++) 
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*Output
Enter elements: 
1
2
3
4
5
6
7
8
9
The array is: 
1 2 3 
4 5 6 
7 8 9 
*/

