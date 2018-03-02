#include<stdio.h>
#include<string.h>
int main()
{
	char z[10];
	int i,m,count=0;
	scanf("%s",z);
	m=strlen(z);
	for(i=0;i<m;i++)
	{
	if(z[i]=='1'||z[i]=='2'||z[i]=='3'||z[i]=='4'||z[i]=='5'||z[i]=='6'||z[i]=='7'||z[i]=='8'||z[i]=='9'||z[i]=='0')
{
	count++;
}
}   
	if(count==0)
	{
	printf(" NOT A NUMERIC NUMBER");
	}
	else
	printf(" NUMERIC NUMBER");
	}
