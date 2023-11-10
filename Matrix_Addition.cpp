//this program sums 2 matrices of any order
#include<iostream>
using namespace std;
int main()
{
//declaring basic variables
    int i,j,row1,row2,col1,col2;
//getting the rows and columns of matrix 1 and 2
    cout<<"Enter the number of rows for matrix 1: ";
    cin>>row1;
    cout<<"Enter the number of columns for matrix 1: ";
    cin>>col1;
    cout<<"Enter the number of rows for matrix 2: ";
    cin>>row2;
    cout<<"Enter the number of columns for matrix 2: ";
    cin>>col2;
//checking if the matrices are of the same order
    if(row1==row2 && col1==col2)
    {
//declaring the arrays
		int a[row1][col2];
        int b[row2][col2];
        int c[row1][col2];
//getting the values for matrix 1
        cout<<"Enter the elements of matrix 1"<<endl;
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                cout<<"Enter the element of row "<<i+1<<" and column "<<j+1<<": "<<endl;
                cin>>a[i][j];
            }
        }
//getting the values for matrix 2
        cout<<"\nEnter the elements of matrix 2"<<endl;
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                cout<<"Enter the element of row "<<i+1<<" and column "<<j+1<<": "<<endl;
                cin>>b[i][j];
            }
        }
//making the sum matrix as null matrix
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                c[i][j]=0;
            }
        }
//adding the 2 matrices and storing them in the sum matrix
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
//printing the sum matrix
        cout<<"The sum matrix is: "<<endl;

        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else
        cout<<"\nPlease learning basic arithmetics before using computers";

}
