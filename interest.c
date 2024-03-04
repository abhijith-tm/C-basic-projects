/*Interest Calculator
  Done by - Abhijith T M
  Date - 15/02/2024 */
  
  #include<stdio.h>
  int main()
  {
  	float P,N,R,I;
  	printf("\nEnter P,N,R\n");
  	scanf("%f%f%f",&P,&N,&R);
  	I = ((P*N*R)/100);
  	printf("Interest : %f \n",I); 
  	
  	return(0);
  }
