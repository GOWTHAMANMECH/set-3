#include<stdio.h>
void main()
{
    int a[50],i,g,max;
    printf("enter the range\n");
    scanf("%d",&g);
    printf("enter the array value\n");
    for(i=0;i<g;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<g;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);return 0;
}
