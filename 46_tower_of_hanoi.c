#include<stdio.h>


void tower( int, char, char, char);

int main()
{
    int num,opt; 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("Select the first move:\n\t1). A to C\n\t2). A to B\n");
    scanf("%d",&opt); 
    switch(opt)
    {
	case 1:
	    {
		tower(num, 'A','C','B');
		break;
	    }
	case 2:
	    {
		tower(num, 'A', 'B', 'C');
		break;
	    }
    }
    return 0;
}


void tower(int num, char r1, char r2, char r3)
{
    printf("start: %d %c %c %c \n", num, r1, r2,r3);	
    if(num==1)
    {
	printf("n %d  Make the legal move from rod %c to %c\n",num,r1,r2);
	return;
    }
    tower(num-1,r1,r3,r2);
    
    printf("n %d Make the legal move from rod %c to %c\n",num,r1,r2);
    
    printf("end %d \n", num);	
    tower(num-1,r3,r2,r1);
}
