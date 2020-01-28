/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to define a macro swap (t, x, y) that interchanges two arguments of type t
 * Input: Enter two arguments  
 * Output: Display swap output
*/
#include<stdio.h>				    //Define Micro as swap function
#define SWAP(type,num1,num2)\
{type temp = num1;\
    num1=num2;\
    num2=temp;}
    
int main()
{
    char ch;
    do
    {
	int opt;
	printf("Select Datatype\n\t1).Int\n\t2).Char\n\t3).Short\n\t4).Float\n\t5).Double\n");
	scanf("%d",&opt);			    //Read Datatype option

	switch(opt)
	{
	    case 1:				    //If int type
		{
		    int num1,num2;		    //Ask user to enter two number
		    printf("Enter the value of num1 : \n");
		    scanf("%d",&num1);
		    __fpurge(stdin);
		    printf("Enter the value of num2 : \n");
		    scanf("%d",&num2);
		    SWAP(int,num1,num2);	    //Call micro and perform swap
		    printf("After Swap num1 = %d and num2 = %d\n",num1,num2);	//Print number
		    break;
		}
	    case 2:				    //If char type
		{
		    char num1,num2;		    //Ask user to enter two char
		    printf("Enter the value of num1 : \n");
		    getchar();
		    scanf("%c",&num1);
		    printf("Enter the value of num2 : \n");
		    getchar();
		    scanf("%c",&num2);
		    SWAP(char,num1,num2);	    //Call micro
		    printf("After Swap num1 = %c and num2 = %c\n",num1,num2);
		    break;			    //Print swap char
		}
	    case 3:				    //If short type
		{
		    short num1,num2;		    //Ask user to enter two short
		    printf("Enter the value of num1 : \n");
		    scanf("%hx",&num1);
		    printf("Enter the value of num2 : \n");
		    scanf("%hx",&num2);
		    SWAP(short,num1,num2);	    //call micro
		    printf("After Swap num1 = %hx and num2 = %hx\n",num1,num2);
		    break;
		}
	    case 4:
		{
		    float num1,num2;
		    printf("Enter the value of num1 : \n");
		    scanf("%f",&num1);
		    printf("Enter the value of num2 : \n");
		    scanf("%f",&num2);
		    SWAP(float,num1,num2);
		    printf("After Swap num1 = %f and num2 = %f\n",num1,num2);
		    break;
		}
	    case 5:
		{
		    double num1,num2;
		    printf("Enter the value of num1 : \n");
		    scanf("%lf",&num1);
		    printf("Enter the value of num2 : \n");
		    scanf("%lf",&num2);
		    SWAP(double,num1,num2);
		    printf("After Swap num1 = %lf and num2 = %lf\n",num1,num2);
		    break;
		}
	    default:
		printf("ERROR : Invalid Input\n");
	}

	printf("Do you want to continue.\n");
	getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );
    return 0;
}
