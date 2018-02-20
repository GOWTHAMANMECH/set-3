#include <stdio.h>
int main() {
	int g,a,d,sum=0,i;
	printf("enter the no of terms\n");
	scanf("%d",&g);
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the difference\n");
	scanf("%d",&d);
    for(i=0;i<g;i++)
    {
        sum=sum+a;
        a=a+d;
    }
    printf("%d",sum);
	return 0;
}
