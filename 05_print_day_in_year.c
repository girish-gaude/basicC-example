/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to find which day of the year
 * Input: Given the number from 1 to 365
 * Output: Display output. 	 
*/
#include<stdio.h>
int main()
{
    char ch;					//Variable delaration
    do
    {
	int day,num;
	int ans = 0;
	printf("Enter the number\n");		//Enter the number
	scanf("%d", &num);

	if ( num >= 1 && num <= 365 )		//Check number between range
	{
	    printf("1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
	    scanf("%d", &day);
	    ans = (num+day-1)%7;
	    //ans = (365+num+day-2);
	   /* while ( ans > 7 )
	    {
		ans = ans - 7; 
	    }*/
	    switch (ans)			//Display Day in year
	    {
		case 1 :
		    printf("%d day is Sunday\n", num);
		    break;
		case 2 :
		    printf("%d day is Monday\n", num);
		    break;
		case 3 :
		    printf("%d day is Tuesday\n", num);
		    break;
		case 4 :
		    printf("%d day is Wednesday\n", num);
		    break;
		case 5 :
		    printf("%d day is Thursday\n", num);
		    break;
		case 6 :
		    printf("%d day is Friday\n", num);
		    break;
		case 7 :
		    printf("%d day is Saturday\n", num);
		    break;
		default :
		    printf("ERROR\n");
	    }
	}
	else
	    printf("ERROR: Check the Entered number\n");//Error when number not in range

	getchar();
	printf("\nDo you want to print again?\n");
	scanf("%c", &ch);
    }while ( ch == 'y' );

    return 0;
}
