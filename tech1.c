#include<stdio.h>

main()
{
	int i,j,s,row;
	
	for(i=1;i<=9;i++)
	{
		for(s=i;s<=8;s++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
   			{
   				printf("+");
		    }
		    else
		    {
		    	printf("%d",j);
			}

	
						
		}
		printf("\n");
	}
	
	 printf("Techwar23");
	 printf("\n");
	for(i=9;i>=1;i--)
	{
		for(s=i;s<=8;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}