/* Largest of three numbers
   Done by Abhijith T M
   Date - 29/02/2024*/
   
   
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("\nEnter three numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b)&&(a>c))
	{
		printf("%d is the largest number \n",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("%d is the largest number \n",b);
	}
	else 
	{
		printf("%d is the largest number \n",c);
	}
	
	return 0;
}
