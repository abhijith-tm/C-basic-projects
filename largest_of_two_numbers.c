/* Largest of two numbers
   Done by - Abhijith T M
   Date - 23/02/2024*/
   
   
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter two numbers : \n");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("%d is greater than %d \n",a,b);
	}else
	{
		printf("%d is greater than %d\n",b,a);
	}

	return 0;
}
