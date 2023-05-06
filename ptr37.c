#include<stdio.h>

main()
{
	int i, j,k,l;
	char c='A';
	
	for(i=1;i<=5;i++)
	{
		for(k=6;k>i;k--)
		{
		printf(" ");
		}
		for(l=1;l<=i;l++)
		{
			c++;
		}
		for(j=i;j>=1;j--)
		{ 
		    c--;
			printf("%c",c);
				
		}
	
		printf("\n");
		
	}
}