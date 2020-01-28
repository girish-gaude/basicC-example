/*
 * Author: Girish Gaude
 * Date: 12/Jan/2020
 * Desciption: Program to perform magic number
 * Input: Enter odd number
 * Output: Display magic square matrix.
*/

#include<stdio.h>
int main()
{
    char ch;
    do
    {
    int size;
    printf("Enter the odd number\n");
    scanf("%d",&size);
    if ( size%2 == 0 )
    {
	printf("ERROR :: ODD number only\n");
	main();
    }
    else
    {
    int mat[size][size];		        //initilize 2D matrix to zero
    for(int i=0; i<size; i++)
    {
       for(int j=0; j<size; j++)
       {
           mat[i][j] = 0;			//Assign to zero
       }
    } 
    int r = 0;					//Make 1 at r=0,c=1 by default value
    int c = size/2;
    mat[r][c] = 1;				//Make it one
    int num = 1;				//Declare num variable
    while( num < (size*size) )			//Run loop till all element filled
    {
	num += 1;				//Inc num
	if( r == 0 && c == size-1 )		//Case 1 : If row = 0 and col = 2 
	{
	    if( mat[size-1][0] == 0 )		//Check Last and first index of matrix resp.
	    {
		r = size-1;			//If zero then update value
		c = 0;
		mat[r][c] = num;
	    }
	    else
	    {
		if ( r == size-1)		//Check whether Row reach End
		{
		    r=0;			//If yes bring back to zero
		    mat[r][c] = num;		//And update value
		}
		else
		{
		    r += 1;			//IF NO, inc row and update value
		    mat[r][c] = num;
		}
	    }
	}
	else if( r == 0 && c != size-1 )	//CASE 2 : If Row = 0 
	{
	    if( mat[size-1][c+1] == 0 )		//Check next space Zero of not
	    {
		r = size-1;			//IF yes move row to last 
		c += 1;				//Inc Col
		mat[r][c] = num;		//And update
	    }
	    else
	    {
		if ( r == size-1)		//IF NO : bring row to first
		{
		    r=0;			
		    mat[r][c] = num;		//Update value
		}
		else
		{
		    r += 1;			//Inc row and update
		    mat[r][c] = num;
		}
	    }
	}
	else if ( r != 0 && c == size-1 )	//CASE size : Col = Last index
	{
	   if( mat[r-1][0] == 0 )		//Check next value zero or not
	   {
		if ( c == size-1 )		//If col at last index
		{
		    c = 0;			//Bring back to first
		    r -= 1;			//Dec row
		    mat[r][c] = num;		//Update value
		}
		else				//If not Zero
		{
		    r -= 1;			//Dec Row**
		    mat[r][c] = num;		//Update matix
		}
	   }
	   else					//If Not Zero
	   {
	     r += 1;				//Inc row
	     mat[r][c] = num;			//Update value
	   }
	}
	else if (r != 0 && c != size-1)		//CASE 4 : Both moves posible
	{
	    if(mat[r-1][c+1] == 0)		//Check next move if zero
	    {
		r -= 1;
		c += 1;
		mat[r][c] = num;		//Inc col and Dec row and update
	    }
	    else
	    {
		if( r == 0 )			//In Non-Zero then check row index  
		{
		    r = size-1;			//Update value
		    mat[r][c] = num;
		}
		else
		{
		    r += 1;			//Inc row by one and update
		    mat[r][c] = num;
		}
	    }
	}
    }
    for(int i=0; i<size; i++)			//Print Matrix
    {
	for(int j=0; j<size; j++)
	{
	    printf(" %d\t",mat[i][j]);
	}
	printf("\n");
    }
    }
    printf("Do you want to continue again? [y/n]\n");
    getchar();
    scanf("%c",&ch);
    }while( ch == 'y' );
    return 0;
}


