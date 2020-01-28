/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to reverse given string
 * Input: Enter the string and choese recursive method OR non-recursive method.
 * Output: Display Reverse string 	 
*/

#include<stdio.h>
#include<stdio_ext.h>

void rec(char *str, int len);					    //Declare function
int main()
{
    char ch;
    do
    {
	int opt;						    //Declare all variable
	int i=0,len=0;
	char str[100];
	__fpurge(stdin);
	printf("Enter String : \n");				    //Read string
	scanf("%100[^\n]",str);
	printf("Select options: \n 1> Recursive\n 2> Non-Recursive\n");
	scanf("%d",&opt);					    //Read option 
	while(str[i] != '\0')					    //Count lenght of string
	{
	    len += 1;
	    i++;						    //Incr count
	}
	switch(opt)
	{
	    case 1:						    //Case 1 recursive
		{
		    printf("Recurcive Reverse String : \n");        //Read string
		    rec( str, len );
		    break;
		}
	    case 2:
		{
		    
		    printf("Non-Recursive Reverse String : \n");	    //Read string
		    for(int i=len; i>=0; i--)			    //Case 2 Non- recursive
		    {
			printf("%c", str[i]);
		    }break;
		}
	    default:
		{
		    printf("Invalid Input\n");			    //Print Error 
		}
	}
	printf("\nDo you want to continue.\n");
	getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );					    //Run again
    return 0;
}

void rec( char *str, int len)
{
    printf("%c",str[len]);
    if (len != 0)
	rec(str,--len);
}
