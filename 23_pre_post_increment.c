/*Author: Girish Gaude
 * Date: 12/Dec/2019
 * Desciption: Program to perform Pre_inc and Post_inc
 * Input: Enter the number.
 * Output: Display output. 	 
*/

#include<stdio.h>

int pre_inc(int *num)			//Funtion pre increament
{
    int mask = 1;			//Mask of 1
    while ( *num & mask )		//Cheack for last bit if non zero then excuit
    {
	*num = *num ^ mask;		//Toggel the mask number to zero
	 mask = ( mask << 1 );		//Left shift by one
    }
    *num = *num ^ mask;			//Toggle next zero bit
    return *num;			//Return number
}
int post_inc(int *num)			//Function Post increament
{
    int i = *num;			//Copy the original number
    int mask = 1;			//Creat mask of 1
    while ( *num & mask )		//Check each non zero bit
    {
	*num = *num ^ mask;		//Toggel the masked bit number
	mask = ( mask << 1 );		//Left shift by one
    }
    *num = *num ^ mask;			//Toggle zero to one 
    return i;				//Reurn original number
}

int main()
{
    char ch;
    do
    {
	int num,opt,i;
	printf("Enter the number.\n");	    //Ask user to enter number 
	scanf("%d", &num);
	printf("Select the opertion.\n1 pre\n 2 post\n");   //Select Option
	scanf("%d", &opt);

	switch (opt)			    //Switch case
	{
	    case 1: 
		i = pre_inc(&num);	    //Call Pre_incr Function		
		printf("Number: %d Pre-inc: %d\n",num, i);
		break;
	    case 2:
		i = post_inc(&num);	    //Call Post_incr Function
		printf( "Number: %d Post-inc: %d\n",i,num );
		break;
	    default:
		printf("Invalid input\n");  //ERROR
	}
	printf("Do you want to continue.\n");
	getchar();
	scanf("%c", &ch);		    //Continue again?
    }while(ch=='y');
    return 0;
}
