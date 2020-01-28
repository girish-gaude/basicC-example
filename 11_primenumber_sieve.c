/*Author:  Girish Gaude
 * Date :  28/Nov/2019
 * Desciption: Program to print all primes smaller than or equal to n. Use Sieve of Eratosthenes method
 * Input:  Enter the number
 * Output: Display prime number
*/

#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    do
    {
	int num;
	int range= pow(2, 10);				//Set working range
	printf("Enter the number \n");
	scanf("%d",&num);				//Read number
	int array[num];
	if ( num < range && num >= 0 )			//Check number is positive and in range
	{
	    if ( num > 1 )				//Check number greater then 2
	    {
		for ( int i = 2; i <= num; i++)		//Read array elements
		{
		    array[i]=i;
		}
		for ( int i = 2; i <= num; i++)		//Run loop
		{
		   for ( int j = 3; j <= num; j++ )	//check number
		    {
			if ( array[j] != i )		//Check for same number
			{
			    if ( array[j]%i == 0 )	//If zero
			    {
				array[j] = 0;		//fill with zero
			    }
			}
		    }
	    	}
		printf("\n");
		for ( int i = 2; i <= num; i++)		//Loop to remove zeros
		{
		    if ( array[i] != 0 )
			printf("%d ",array[i]); 	//Print array
		}
	    }
	    else
	    printf("\n %d Not Prime number \n", num);	//if number out of range
	}
	else
	    printf("\nERROR: Check element size\n");	//if number out of range
	getchar();					//clear char
	printf("\nDo you want to continue. Press y or n\n");
	scanf("%c", &ch);
    }while ( ch == 'y' );	    			//continue loop
    return 0;
}

