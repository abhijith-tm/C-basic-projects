/* Positive negetive or zero
   Done by - Abhijith T M
   Date - 23/02/2024*/
   
   
#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter a number : \n");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("%d is Positive \n",a);
	
	}
	else
	{
		if(a<0)
		{
			printf("%d is Negetive \n",a);
		}
		else
		{
		 	printf("%d is Zero\n",a);
		}
				
	}

	return 0;
}
