/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to Find transpose of given matrix and find product of matrix
 * Input: Enter matrix element
 * Output: Display All three matrix
*/

#include<stdio.h>

int main()
{
    char ch;
    do
    {
	int row,col;			    //ASk user for data
	printf("Enter Length of Row\n");
	scanf("%d",&row);
	printf("Enter Length of Col\n");
	scanf("%d",&col);

	int mat[row][col];		    //Read Matrix elements
	int pro_mat[row][row];
	printf("Enter element of matrix %dX%d :\n",row,col);
	for(int i=0; i<row; i++)	    //Enter matrix elements
	{
	    for(int j=0; j<col; j++)
	    {
		scanf("%d", &mat[i][j]);
	    }
	}	    
	
	printf("Matrix\n");
	for(int i=0; i<row; i++)	    //Print Matrix
	{
	    for(int j=0; j<col; j++)
	    {
		printf(" %d ", mat[i][j]);
	    }
	    printf("\n");
	}
	int tran[col][row];
	for(int i=0; i<row; i++)	    //Convert to transpose
	{
	    for(int j=0; j<col; j++)
	    {
		tran[j][i] = mat[i][j];
	    }
	    printf("\n");
	}
	printf("Matrix Transpose : \n");
	for(int i=0; i<col; i++)	    //Print Transpose
	{
	    for(int j=0; j<row; j++)
	    {
		printf(" %d ", tran[i][j]);
	    }
	    printf("\n");
	}

	printf("Product Matrix %dX%d\n",row,row);
	int sum = 0;
	for(int x=0; x<row; x++)	    //Calculate Product of two matrix
	{
	    for(int y=0; y<row; y++)
	    {
		for(int j=0; j<col; j++)
		{
		    int prod = mat[x][j] * tran[j][y];
		    sum = prod + sum;
		}
		pro_mat[x][y] = sum;	    //store in new matrix
		sum = 0;
	    }
	}
	for(int i=0; i<row; i++)	    //Print Product matrix
	{
	    for(int j=0; j<row; j++)
	    {
		printf(" %d ", pro_mat[i][j]);
	    }
	    printf("\n");
	}
	printf("Do you want to continue.\n");
	getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );
    return 0;
}
