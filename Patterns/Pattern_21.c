#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
  {
   for(int j=0;j<n-1-i;j++)
    {
      printf("   ");
    }
    for(int j=0;j<=i;j++)
    {
      printf(" %d ",j+1);
    }
   for(int j=i;j>=1;j--)
    {
        if(j==0)
            printf(" ");
        printf(" %d ",j);
    }
   printf("\n");
  }
  for(int i=0;i<n-1;i++)
  {
   for(int j=0;j<i+1;j++)
    {
      printf("   ");
    }
    for(int j=0;j<n-1-i;j++)
    {
      printf(" %d ",j+1);
    }
   for(int j=n-2-i;j>=01;j--)
    {
      printf(" %d ",j);
    }
   printf("\n");
  }


}

