/*
 * Author: Girish Gaude
 * Date: 20/Jan/2020
 * Desciption: Program to Print bits of float & double.
 * Input: Enter Float or Double number
 * Output: Display IEEE converted output
*/

#include<stdio.h>				//header file

void my_ieee(float num, int opt)		//Function
{
    void *p = &num;				//Declare variable
    int out;
    if(opt == 1)				//Check option
    {
	for(int i = 33; i>=0; i--)		//Float
	{
	    if( i == 23 || i == 32 )		//Put space
		printf(" ");
	    else
	    {
		out = (*(int*)p >> i) & 1;	//Print one
		printf("%d",out);
	    }
	}
	printf("\n");
    }
    else					//For double
    {
	for(int i = 65; i>0; i--)		//Put space 
	{
	    if( i == 64 || i == 53 )
		printf(" ");
	    else
	    {
		out = (*(long int*)p >> i) & 1;	//Print onces
		printf("%d",out);
	    }
	}
    }
}

int main()
{
    char ch;
    do
    {
	int opt;
	printf("Please Select the type \n\t1. Float\n\t2. Double\n");
	scanf("%d", &opt);			//ask for option
	switch(opt)
	{
	    case 1:				//For Float value
		{
		float num;
		printf("Enter the Float number\n");
		scanf("%f", &num);
		my_ieee(num, opt);		//Call function
		break;
		}
	    case 2:
		{
		double num1;			//For double
		printf("Enter the Double number\n");
		scanf("%lf", &num1);
		my_ieee(num1, opt);		//Call Function
		break;
		}
	    default:				//Error if no proper input
		printf("Error : Enter Valid Input\n");
		break;
	}
	printf("\nDo you want to continue.\n");
	getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );			//continue again
    return 0;
}
