#include<stdio.h>
int main()
{
	int a,b,c,t,n,x,y;
	scanf("%d",&t);
	for(a=0;a<t;a++)
	{	
		c=0; 
		scanf("%d",&n);
		for(b=0;b<n;b++)
		{
			scanf("%d%d",&x,&y);
			if((y-x)>5)
			c++;
			
		}
    printf("%d\n",c);	
	}
}
