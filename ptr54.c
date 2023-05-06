#include<stdio.h>

main()
{
  int i,j,n;
  //printf("\nEnter the value:");
  //scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    printf("\n");
    
    for(j=1;j<=5-i;j++)
    {
       printf("  ");
    }
    for(j=5;j>5-i;j--)
    {
       printf(" %d",j);
    }
    for(j=5-i+2;j<6;j++)
    {
       printf(" %d",j);
    }
  }
}