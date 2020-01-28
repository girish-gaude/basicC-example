/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to display all ascii values
 * Input: All ascii value
 * Output: Display output. 	 
*/
#include<stdio.h>
int main()
{
    printf("Dec		Oct	    Hec		Ascii\n" );
    printf("___________________________________________________________\n" );
    for ( int i=0; i<=127; i++ )				//Take all possible range
    {
	if ( i <= 32 )
	{	    
	    printf(" %d		%0.3o	    %x		Non Printable\n", i,i,i);//Display dec,octal,hex and ascii values
	}
	else if ( i>32 && i <127 )
	{

	    printf(" %d		%o	    %x		%c\n", i,i,i,i);
	}
	else
	    printf(" %d		%o	    %x		Non Printable\n", i,i,i);
	

    }
    return 0;
}
