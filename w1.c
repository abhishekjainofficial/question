#include<stdio.h>
int main()
{
	int a,b,c;
	int sum=0;
	scanf("%d",&a);
	for(b=0;a>=0;b++)
	{
		c=a%10;
		sum = sum + c;
		a=a/10;
	}
	printf("%d",sum);
}
