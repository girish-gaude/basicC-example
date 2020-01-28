/*Author: Girish Gaude
 * Date: 10/Dec/2019
 * Desciption: Program to perform Fibbonacci using recursion
 * Input: Enter the number.
 * Output: Display output. 	 
*/

#include<stdio.h>
#include<math.h>
int fibbonacci ( int,int,int,int );			    //Function prototype
int main()
{
    char ch;						    //Decleartion
    int var = pow ( 2, 10 );				    //Define range
    do
    {
	int num,fib;
	printf("Enter the number\n");			    //Ask user for number
	scanf("%d", &num);
	int a = 0, c = 0;				    //Define value of a,c=0
	int b = 1;					    //Define value of b=1
	if ( num <= var )				    //Check number fall in range or not
	{
	    printf("%d ", a);				    //print a
	    printf("%d ", b);				    //print b
	    fibbonacci ( a,b,c,num );			    //Call funtion and pass a,b,c and number
	}
	printf("\nDo you want to continue.\n");
	getchar();
	scanf( "%c", &ch );				    //If want to repeat
    }while ( ch == 'y' );
    return 0;
}
int fibbonacci ( int a, int b, int c, int num )		    //Function to perform fibbonacci
{
    if ( num > 0 )					    //check number is positive
    {
	c = a + b;					    //Add both number
	a = b;
	b = c;
	if ( c <= num )					    //if sum is less then continue
	{
	    printf( "%d ", c );
	    fibbonacci(a,b,c,num);			    //call again function
	}
    }
    else
    {
	c = a - b;					    //If number is negative
	a = b;
	b = c;
	if ( c >= num && c <= -(num) )			    //Negative series
	{
	    printf("%d ", c);
	    fibbonacci(a,b,c,num);			    //Call function again
	}
    }
}
