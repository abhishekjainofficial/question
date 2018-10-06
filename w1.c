#include<stdio.h>
int s;
int sum(int);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",sum(a));
}
int sum(int a)
{int c;
if(a==0)
{
return ;}
else
{
c=a%10;
s=s+c;
a=a/10;
sum(a);
return s;
}
}


