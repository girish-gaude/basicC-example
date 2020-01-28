/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to creat function read_int to read an integer
 * Input: Enter the characters
 * Output: Display only numbers (positive and negative) in characters. 	 
*/
#include<stdio.h>			    
#include<stdio_ext.h>			    //Header for __fpurge(stdin)

int read_int(int *ch)			    //Function 
{
    int digit,sum = 0, sign = 1;			    //Declare variable
    *ch = getchar();			    //Read First character
    if ( *ch == '+' )		    	//Chech first character
    {
	sign = 1;
	*ch = getchar();
    }
    if ( *ch == '-' )		    	//Chech first character
    {
	sign = -1;
	*ch = getchar();
    }
    
    while ( *ch != '\n')
    {
	if (*ch >= '0' && *ch <= '9')	    //Check if number
	    {
		digit = *ch - 48;	    //Subtract with 48
		sum = sum * 10 + digit;    //Positive number
		*ch = getchar();		    //Read next char
	    }
	    else
		break;
    }

    printf("%d\n",sum);
    return sign*sum;			    //Return pointer value
}

int main()
{
    char ch;
    do
    {
	int num;			    //Declare number to zero
	printf("Enter the Number\n");
	char sum = read_int(&num);			    //Call function
	printf("%d",sum);		    //Print return function
	__fpurge(stdin);		    //Clear buffer
	printf("\nDo you want to continue.\n");
	scanf("%c", &ch);
	getchar();
    }while( ch == 'y' );		    //Loop run again
    return 0;
}
