#include<stdio.h>

int main()
	{
		int fact,i,number;
		printf("Enter your number:\t");
		scanf("%d",&number);
		fact=1;
		for(i=1;i<=number;i++)
			{
				fact=fact*i;	
			}
		printf("%d",fact);
		
	}

