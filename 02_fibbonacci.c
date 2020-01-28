/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to generate fibbonacci numbers <= 'n'.
 * Input: Enter the number
 * Output: Display fibbonacci series.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int input = 0;			    //Variable Declaration
    char ch;
    int var = pow(2 , 10);		    //Set working range
    do
    {
	printf("Enter the number\n");	    //Enter number
	scanf("%d", &input);	    
	int num1 = 0;			    //Temp Variable 
	int num2 = 1;
	int num3 = 0;
	if ( input < var )		    //Check the range
	{
	    if ( input == 0 )		    //Zero series
	    {
		printf("%d", num1);
	    }
	    else if ( input > 0 )	    //Positive fib series
	    {
		printf("%d ", num1);
		printf("%d ", num2);
	    
		while ( (num1+num2) <= input )
		{
		    num3 = num1 + num2;
		    printf("%d ", num3);
		    num1 = num2;
		    num2 = num3;
		}
	    }
	    else if ( input < 0 )	    //Negative fib series
	    {
		printf("%d ", num1);
		printf("%d ", num2);
		while ( (num1-num2) >= input && (num1-num2) <= -(input) )
		{ 
		    num3 = num1 - num2;
		    printf("%d ", num4);
		    num1 = num2;
		    num2 = num3;
		}
	    }
	}
    getchar();
    printf("\nDo you want to continue? Press y or n\n");
    scanf("%c", &ch);
    }while( ch == 'y' );
return 0; 
}
