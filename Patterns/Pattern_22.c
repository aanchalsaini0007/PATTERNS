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
    for(int j=0;j<=2*i;j++)
    {
      printf(" %d ",j+1);
    }
   printf("\n");
  }
  for(int i=0;i<n-1;i++)
  {
   for(int j=0;j<=i;j++)
    {
      printf("   ");
    }
    for(int j=0;j<n+(n-2*(i+1))-1;j++)
    {
      printf(" %d ",j+1);
    }
   printf("\n");
  }
}

