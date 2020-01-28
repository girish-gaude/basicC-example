/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to Implement getword, atoi, itoa functions
 * Input: Enter String
 * Output: Display output	 
*/

#include<stdio.h>
#include<stdio_ext.h>

int my_getword( char *str )			    //Getword Function
{
    char t = 0;
    int count = 0;				    //Define variable
    for ( int i=0; str[i] != '\0'; i++ )	    //Start loop
    {
	if ( str[i] != ' ' && t != ' ')
	{
	    count += 1;				    //Count word
	}
	else
	{
	    t = ' ';
	    str[i] = '\0';			    //If space then Null character
	}
    }
    return count;				    //Return count
}

int my_atoi( char *str )			    //Atoi function
{
    int sum = 0, digit, sign = 1;		    //Define variable
    int i = 0;
    if(str[i] == '-')				    //if -ve
    {
	sign = -1;				    //Put -ve in variable
	++i;					    //inc i for next string
    }
    if(str[i] == '+')				    //IF +ve
    {
	sign = 1;				    //Put +1
	++i;
    }
    while( str[i] != '\0')			    //Run till null encounter
    {
	if( str[i] >= '0' && str[i] <= '9')	    //Check only digit
	{
	    digit = str[i] - 48;		    //string to int
	    sum = sum*10 + digit;		    //concatenate 
	    ++i;				    //inc i
	}
    	else
	{
	    str[i] = '\0';			    //If non digit then put null
	    break;
	}
    }
    return sign*sum;
}
   

int my_itoa( int num, char *str )		    //Itoi Function
{
    int count = 0, sign, c = num,rem,len;	    //Define variable
    if(num<0)					    //If negative number
	sign = -1;
    else					    //If +ve num
	sign = 1;
    while(c)					    //Count lenght
    {
	++count;
	c/=10;
    }
    if(sign == 1)				    //Positive num
    {
	len = count;	
	str[count] = '\0';			    //Put null at last bit
	count--;				    //Dec count

	while(num != 0)				    //Run till 0 bit
	{
	    rem = num%10;			    //take each char
	    num = num/10;
	    str[count] = rem + 48;		    //chat to digit
	    count--;
	}
    }
    else
    {
	len = count;
	str[count+1] = '\0';			    //Put null at last
	count--;

	num = num * -1;				    //-ve number
	while(num != 0)
	{
	    rem = num%10;
	    num = num/10;
	    str[count+1] = rem + 48;		    //char to digit
	    count--;
	}
	str[0] = '-';				    //put 1st bit as -ve
    }
    __fpurge(stdin);
    return len;
}

int main()
{
    char ch;
    do
    {
	char str[100];						    //Declare variable
	int opt,s;
	printf("Please select the Funtion\n\t1)my_getword\n\t2)my_atoi\n\t3)my_itoa\n");
	scanf("%d",&opt);					    //Select option

	switch(opt)
	{
	    case 1:						    //Getword
		{
		    printf("Enter String\n");
		    getchar();
		    scanf("%100[^\n]",str);			    //Enter string
		    int len = my_getword(str);			    //Function call
		    printf("\nLenght of word : %d\n",len);	    //Print lenght
		    printf("%s\n", str);			    //Print string
		    break;
		}
	    case 2:						    //Atoi
		{
		    printf("Enter String\n");
		    getchar();	
		    scanf("%100[^\n]",str);			    //Enter string
		    my_atoi(str);				    //Function call
		    printf("output : %s\n",str);		    //Print string
		    break;
		}
	    case 3:						    //Itoi
		{
		    printf("Enter number\n");
		    scanf("%d",&s);				    //Enter string
		    int len = my_itoa(s,str);			    //Function call
		    printf("Length :%d \n",len);		    //Print length and string
		    printf("Output :%s\n", str);
		    break;
		}
	}

	printf("Do you want to continue.\n");
	getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );
    return 0;
}
