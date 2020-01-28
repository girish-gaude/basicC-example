/*Author: Girish Gaude
 * Date: /Nov/2019
 * Desciption: Program to check whether given number is even or odd with sign
 * Input: Enter the number
 * Output: Display Results.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num;				    //Define Variable
    int range, var;
    char ch;
    do					    //Start do while loop
    {
	printf("Enter the number\n");	    //Enter the number
	scanf("%d", &num);
	range = pow(2, 10);		    //Set range to 2^10

	if ( num <= range )		    //Check the number in range
	{
	    if ( num > 0 )		    //Check for positive number
	    {
		if ( num % 2 )		    //Check number is odd or even
		{
		    printf("Number %d is Positive and Odd\n", num);
		}
		else
		{
		    printf("Number %d is Positive and Even \n", num);
		}
	    }
	else if ( num < 0 )		    //Check for negative number
	    {
		if ( num % 2 )		    //Check number is odd or even
		{
		    printf("Number %d is Negative and Odd \n", num);
		}
		else
		{
		    printf("Number %d is Negative and Even \n", num);
		}
	    }
	else
	    {
		printf("Number is neither positive nor negative\n"); //print if number is zero.
	    }   
	}
	else
	    printf("ERROR: Invalid number");	//if number out of range
	getchar();				//clear char
	printf("Do you want to continue. Press y or n\n");
	scanf("%c", &ch);
    }while ( ch == 'y' );			//continue loop
    return 0;
}

