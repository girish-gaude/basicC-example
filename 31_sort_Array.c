/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to 
 * Input: Enter 
 * Output: Display  	 
*/

#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>

int my_cmp( char *s1, char *s2);
void my_cpy(char *s1, char *s2);
void sort_name(char** s1, int row)
{
    char temp[32];
    for(int i=0;i<row;i++)
    {
	for(int j = i+1; j<row; j++)
	{
	    if(my_cmp(s1[i],s1[j])>0)
	    {
		my_cpy(temp,s1[i]);
		my_cpy(s1[i],s1[j]);
		my_cpy(s1[j],temp);
	    }
	}
    }
}
int my_cmp( char *s1, char *s2)
{
    while((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
    { 
	s1++;
	s2++;
    }
    if(*s1 == *s2)
	return 0;
    else
	return *s1 - *s2;
}
void my_cpy(char *s1, char *s2)
{
   char temp[50] = {'\0'};
   int i = 0;
   while(s2[i] != '\0')
   {
       s1[i] = s2[i];
       i++;
   }
   s1[i] = '\0';
}


int main()
{
    char ch;
    do
    {
	int row;
	printf("Enter number of Row\n");
	scanf("%d",&row);
	char* arr[row];
	printf("Enter the %d names of lenght max 32 character in each\n", row);
	for(int k=0; k<row; k++)
	{
	    arr[k] =(char*)malloc(row*sizeof(char[32]));
	}
	if (arr == NULL)
	{
	    printf("ERROR : Memory not allocatedi\n");
	}
	__fpurge(stdin);
	for(int i=0; i<row; i++)
	{
	    scanf(" %32[^\n]",arr[i]);
	    __fpurge(stdin);
	}

	sort_name(arr,row);
	
	printf("Sorted Names are: \n");
	for(int j=0; j<row; j++)
	{
	    printf(" %s\n", arr[j]);
	}

	printf("Do you want to continue.\n");
	getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );
    return 0;
}
