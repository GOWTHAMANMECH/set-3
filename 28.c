#include <stdio.h>
void main()
{
  int g[5],n;
  printf("Enter the no of element:");
  scanf("%d",&n);
  printf("Elements are:");
  for(int i=0;i<n;i++)
  {
    scanf("\n%d",&g[i]);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t%d\n",i,g[i]);
  }
  return 0;
}
