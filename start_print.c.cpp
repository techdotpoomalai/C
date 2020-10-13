#include<stdio.h>

int main()
	{	
		int x=10;
		int i,j;
		printf("Enter your limit:");
		scanf("%d",&x);
		for(i=1;i<=x;i++)
			{
				//printf("*");
				printf("\n\n");
				
				for(j=1;j<=i;j++)
					{
						
						printf("*\t");	 
					}
				printf("\n");	 
			}
	}

