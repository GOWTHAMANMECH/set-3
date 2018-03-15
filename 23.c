#include<stdio.h>
void main()
{
    int a[50],i,g,min;
    printf("enter the range\n");
    scanf("%d",&g);
    printf("enter the array value\n");
    for(i=0;i<g;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<g;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);return 0;
}
