/*Square and Cube of a number
  Done - by Abhijith T M
  Date - 22/02/2024 */
  
  
  
#include<stdio.h>
#include<math.h>

int main()
{
	
	int sq,cb,num;
	printf("\nEnter a number : \n");
	scanf("%d",&num);
	
	sq = pow(num,2);
	cb = pow(num,3);
	
	printf("Square : %d\nCube : %d\n",sq,cb);
	return 0;
}
