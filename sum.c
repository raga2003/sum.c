#include<stdio.h>
int sum(int a);
int main()
{
	int num,result;
    printf("enter any number");
	scanf("%d",&num);	
	result= sum (num);
	printf("sum of the digits is : %d\n",result);
	  
	  
	  return 0;
		
}
    int sum(int num)
{
    if (num !=0)
	{ 
	  return(num %10+sum(num/10));
	
	}
	else
	{
	  return 0;
		
	}
	
	
}
