/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to check whether given number is	perfact or not
 * Input: Enter the number
 * Output: Display Results.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    do
    {
	int num;			    //Declare variables
	int sum=0;
	int range = pow(2, 10);		    //set range to 2^10	

	printf("Enter the number\n");	    //Enter number
	scanf("%d", &num);
	if ( num < range )		    //Check number in range
	{
	    if ( num < 0 )		    //Check for negative number
		printf("Invalid number.\n");
	    else
	    {
	      for ( int i=1; i<num; i++)    //Run loop
	      {
		if ( num % i == 0)	    //Check each number 
		{
		   sum=sum + i;		    //Add number to variable sum
		}
	      }	
	      if ( sum == num)		    //Compare variable sum with original number
		printf("Yes. Number %d is perfect number\n", num);
	      else
	    	printf("No. Number %d is not perfect number\n", num);
	    }
	}
	else
	    printf("ERROR: Number not in range\n");

    getchar();
    printf("Do you want to run again? Press y or n\n");
    scanf("%c", &ch);
    }while ( ch == 'y' );
    return 0;
}
