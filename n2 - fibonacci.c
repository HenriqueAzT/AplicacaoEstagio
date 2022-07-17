#include <stdio.h>
#include <conio.h>

void fib(int term, int var)
{
	int num[3] = {1,0,0}, i;
	printf("\nFibonacci sequence upto %d terms is :-\n\n",term);
	for(i=0;i<term;i++)
	{
		num[0]+=num[1];
		num[1] = num[2];
		num[2] = num[0];
		printf("%d\t",num[0]);
		if((i+1)%9==0 && i!=0){
			printf("\n\n");
		}
		if(var == num[0]){
			printf("- O numero inserido esta na sequencia\n", var);
		}else{
			printf("- O numero inserido nao esta na sequencia de fibonnaci\n");
			continue;
		}
	}
}

void main()
{
	int num;
	
	printf("\nEnter the number of terms : ");
	scanf("%d",&num);
	fib(num, 5);
}
