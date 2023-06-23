#include<stdio.h>
main()
{
	int i,j,s;
	
	for(i=1;i<=7;i++)
	{
	  for(s=i;s<7;s++)
	  {
	    printf(" ");	
	  }
	  for(j=1;j<=i;j++)	
	  {
	  	printf("@");
	  }
	  printf("\n");
	}
	
		for(i=7;i>=1;i--)
	{
		for(s=6
		;s>=i;s--)
		{
			printf(" ");
		}
		
		for(j=i;j>=1;j--)
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
}