#include<stdio.h>

void file_read(char *f1)
{
    char ch;
    while((ch=getc(f1)) != EOF)
    {
	putc(ch, stdout);
    }
   if(f1 == NULL)
   {
       printf("ERROR\n");
       return 1;
   }
   fclose(f1);
   return 0;
}

int main(int argc, char **argv)
{
    FILE *fp1;
    printf("No of files : %d\n", argc);
    switch(argc)
    {
	case 4:
	    {
		printf("Files : %s %s %s\n",argv[1],argv[2],argv[3]);
		break;
	    }
	case 3:
	    {
		printf("Files : %s %s\n",argv[1],argv[2]);
		break;
	    }
	case 2:
	    {
		printf("Files : %s\n",argv[1]);
		fp1 = fopen("argv[1]","r");
		file_read(&fp1);
		break;
	    }
	default:
	    printf("ERROR : Invalid Input\n");
    }
    printf("List of files : \n");
    for(int i=1; i<argc; i++)
    {
	printf("%s\n",argv[i]);
    }

    return 0;
}
