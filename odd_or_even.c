/* Odd or even
   Done by - Abhijith T M
   Date - 23/02/2024*/
   
   
#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter a number : \n");
	scanf("%d",&a);
	
	if(a%2 == 0)
	{
		printf("%d is Even Number\n",a);
	}else
	{
		printf("%d is Odd Number\n",a);
	}

	return 0;
}
