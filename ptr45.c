#include<stdio.h>

main()
{
	int i, j,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=6;k>i;k--)
		{
		printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}
}