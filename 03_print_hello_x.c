/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to hello in X.
 * Input: Enter the number
 * Output: Hello    Hello
	    Hello  Hello
	     HelloHello
	    Hello  Hello
	   Hello    Hello
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,j;
    char ch;
    int range = pow( 2, 5);			//Set Maximum range
   do
   {
       printf("Enter the number:\n ");		//read number
       scanf("%d", &num);
       if ( num < range )			//Check entered number in given range
       {
	   if ( num%2 == 1 )			//If number is odd
	   {
		for ( i=-1; i<num/2; i++ )	//Print top half
		{
		    for ( j=0; j<=i; j++ )	//loop for space
			{
			    printf(" ");
			}
		    printf("Hello");		//print hello
		    for ( int k=2*(((num-2)/2)-i); k>0; k-- ) //loop for next space till next hello word
			{
			    printf(" ");
			}
		    printf("Hello\n");		//next hello
	        }
		for ( int i=num/2; i>0; i-- )	//print bottom half
		{
		    for ( int j=1; j<i; j++ )	//loop for space
			{
			    printf(" ");
			}
		    printf("Hello");		//Print hello
		    for ( int k=0; k<(num)-2*i+1; k++ )  //loop for space till next hello word
			{
			    printf(" ");
			}
		    printf("Hello\n");		//Print hello
		}
           }
	   else if( num%2 == 0 )		//For Even number
	   {
		for ( i=0; i<num/2; i++ )	//Top half
		{
		    for ( j=0; j<=i; j++ )	//loop for space
			{	
			    printf(" ");
			}
		    printf("Hello");		//print hello
		    for ( int k=2*(((num-2)/2)-i); k>0; k-- )	//space after hello till next hello
			{
			    printf(" ");
			}
		    printf("Hello\n");		//print hello
	        }
		for ( int i=num/2; i>0; i-- )	//bottom half
		{
		    for ( int j=0; j<i; j++ )	//loop space
			{
			    printf(" ");
			}
		    printf("Hello");		//Print hello
		    for ( int k=1; k<(num)-2*i+1; k++ )	//next space
			{
			    printf(" ");
			}
		    printf("Hello\n");		//print hello
///		 }
	   }
	   }
       getchar();				//clear any char
       printf("\n\nDo you want to print again? Pres y or n\n");
       scanf("%c", &ch);
   }while( ch == 'y' );				//loop to run again
  return 0; 
}
