#include<stdio.h>
int main()
{
	int a,b,c,t,n,x,y;
	printf("Enter any integer");
	scanf("%d",&t);
	for(a=0;a<t;a++)
	{	
		c=0;
		printf("Enter any integer");
		scanf("%d",&n);
		for(b=0;b<n;b++)
		{
			printf("Enter any integer");
			scanf("%d%d",&x,&y);
			if((y-x)>5)
			c++;
			
		}
    printf("%d\n",c);	
	}
}
