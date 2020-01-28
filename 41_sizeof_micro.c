/*
 * Author: Girish Gaude
 * Date: 21/Jan/2020
 * Desciption: Program to perform size of using micro
 * Input: Enter datatype
 * Output: Display size of datatype
*/

#include<stdio.h>
#include<stdio_ext.h>

#define MY_SIZEOF(num) (char*)(&num+1) - (char*)(&num)		    
int main()						    //Define micro
{
    char ch;
    do
    {
	int opt;
	printf("Please Select the datatype\n\t1.char\n\t2.int\n\t3.float\n\t4.double\n");
	scanf("%d", &opt);
	switch(opt)					    //Ask option for input
	{
	    case 1:					    //If char
		{
		char num;
		printf("Sizeof = %lu\n", MY_SIZEOF(num));   //Replace micro
		break;
		}
	    case 2:					    //IF int
		{
		int num1;
		printf("Sizeof = %lu\n", MY_SIZEOF(num1));  //Replace micro
		break;
		}
	    case 3:
		{
		float num2;				    //IF float
		printf("Sizeof = %lu\n", MY_SIZEOF(num2));  //Replace micro
		break;
		}
	    case 4:					    //IF double
		{
		double num3;
		printf("Sizeof = %lu\n", MY_SIZEOF(num3));  //replace micro
		break;
		}
	    default:
		printf("Please check the input\n");
	}

	printf("Do you want to continue.\n");
	__fpurge(stdin);
	scanf("%c", &ch);
    }while( ch == 'y' );				    //continue again
    return 0;
}
