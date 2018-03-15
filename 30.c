#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("Enter time in hrs:min format");
    scanf("%d \t %d %d\t %d",&a,&b,&c,&d);
    e=(a-c);
    f=(b-d);
    printf("%d:%d",e,f);
}
