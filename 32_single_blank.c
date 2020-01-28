/*
 * Author: Girish Gaude
 * Date: 8/Jan/2020
 * Desciption: Program to Replace each string of one or more blanks by a single blank.
 * Input: Enter String with multiple spaces.
 * Output: Display remove more then one space.
*/

#include<stdio.h>
#include<stdio_ext.h>
void blank(char *str)				    //Function used to remove extra spaces
{
    int space = 0, f=0;				    //Int to zero		
    for(int i=0; str[i] != '\0'; i++ )		    //Run loop
    {
	if( str[i] == '\t' )			    //Check for TAP and replace with space
	    str[i] = ' ';
    }
    for(int i=0; str[i] != '\0'; i++)		    
    {
//	if(str[0] == ' ')
//	{
//	    str[0] = str[1];
//	}


	if( str[i] == ' ' )			    //Check for space
	{
	   if( str[i] == ' ' && space == 0 )	    //read char and check with SPACE and count space
	    {
		printf("%c", ' ');		    //Print first SPACE
		space++;			    //Inc
	    }					    //More then one Space skip next space
	}
	else
	{
	    printf("%c",str[i]);		    //Print next char if not SPACE and reset variable
	    space=0;				    
	}
    }
}


int main()
{
    char ch;
    do
    {
	char str[500];
	__fpurge(stdin);	//Define array
	printf("Enter String\n");		    //Ask user to enter string
	scanf("%500[^\n]",str);

	blank(str);				    //Call funtion
	
	printf("\nDo you want to continue.\n");
	getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );
    return 0;
}
