/*Author: Girish Gaude
 * Date: 4/Dec/2019
 * Desciption: Program to perform bitwise function
 * Input: Read number, i, a and b value from user
 * Output: Display output. 	 
*/
#include<stdio.h>


int set_nbits_from_pos(int i, int val, int b, int n);   //Prototype
int main()
{
    char ch;
    do
    {
	int n,i,a,b,c,val;
	printf("Enter the value of 'n' number: ");	//Read value of a
	scanf("%d", &n);
	printf("Enter the value of 'i' number: ");	//Read value of i
	scanf("%d", &i);
	printf("Enter the value of 'a' number: ");	//Read value of a
	scanf("%d", &a);
	printf("Enter the value of 'b' number: ");	//Read value of a
	scanf("%d", &b);
	printf("Then binary form of 'n': \t");
	for(int j=31; j>=0; j--)			//Print bits
	{
	    int value;
	    value=(n>>j) & 1;			//Get bits
	    printf("%d", value);
	}
	printf("\n");
	printf("The binary form of 'i': \t");		//Print i bits
	for(int n=31; n>=0; n--)
	{
	    int i_val;
	    i_val=(i>>n)&1;				//Get i values
	    printf("%d",i_val);
	}

	if( a>=0 && a<=31 )				//check 'a' from user(0 < a < 31)
	{
	    if(b>=0 && b<=31)
	    {

	    //val = b-a+1;				//Create new variable
	    c=set_nbits_from_pos(i,a,b,n);		//Function call
	    printf("\nNew binary form of 'i': \t");
	    for(int j=31; j>=0; j--)			//Print bits
	    {
		val = (c>>j) & 1;			//Get bits
		printf("%d", val);
	    }
	    printf("\n");
	    }
	    else
		printf("Enter valid b input\n");
	}
	else
	{
	    printf("Enter valid input for a\n");	//If out of range
	}
	printf("Do you want to continue again\n");
	getchar();
	scanf("%c",&ch);
    }while(ch=='y');
    return 0;
}

int set_nbits_from_pos(int i, int val, int b, int n) //Function
{
    int ans,res,new_i;				//Declare variable in function
    ans = (n & ((1<<(b-val+1))-1))<<val;
    res = (i & ~(((1<<(b-val+1))-1)<<val));
    new_i = ans | res;
    return new_i;					//Return to main
}




