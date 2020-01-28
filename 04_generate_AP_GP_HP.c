/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to read 3 numbers a, r, n. Generate AP, GP, HP
 * Input: Enter the number
 * Output: Display output 	 
*/
#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int range = pow (2, 10);			    //Set range to 2^10
    do
    {
	int a,r,n;				    //Variable declaration
	float HP;
	printf("Enter the start value: \n");	    //Read all variable
	scanf("%d",&a);
	printf("Enter the gap value: \n");
	scanf("%d",&r);
	printf("Enter the last value: \n");
	scanf("%d",&n);

	int ap = a;				    //Temp Variable
	int gp = a;
	int hp = a;
	
	if ( a > range || r >range || n > range )   //Check number in range
	    printf("ERROR: Invalid input.");
	else if ( a < 0 || r < 0 || n < 0 )	    //Check number is negative
	    printf("ERROR: Number are negative");
	else
	    {
		printf("\nAP: ");
		for ( a ; ap<=n; a++ )		    //Calculate AP
		{
		    printf("%d ", ap);
		    ap = ap + r;
		}
		a = gp;
	        printf("\nGP: ");
		for ( a ; gp<=n; a++ )		    //Calculate GP
		{
		    printf("%d ", gp);
		    gp = gp * r;
		}
		printf("\nHP: ");
		ap = hp;
		for (int i=0 ; i<=n; i++ )	    //Calculate HP
		{   
		    ap = ap + r;
		    HP =(float) 1/ap;		    //Typecast to float
		    printf("%0.3f ", HP);
		}
	    }

    getchar();
    printf("\nDo you want to run again? Press y or n\n");
    scanf("%c", &ch);
    }while ( ch == 'y' );
    return 0;
}
