#include<stdio.h>
int main()
{
	int a,b,g,n,m,g2,g1,g3,g4;
	g2=0;
	g3=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(m=2;m<=n;m++)
	{
		a=0;
		b=m;
		g=b;
		printf("\n%d :\n%d\t",b,b);
			do
	{
		if(b%2==1)
		{
			b=(b*3)+1;
		}else
		{
			b=b/2;
		}
		a=a+1;
		printf("%d\t",b);
		if(b>g)
		{
			g=b;
		}
   	}while(b!=1);
   	if(a>g2)
   	{
   		g1=m;
	   	g2=a;
	   }
	   if(g>g3)
	   {
   		g3=g;
   		g4=m;
   	}
   	printf("\nNumber of steps : %d\nGreatest : %d\n\n\n",a,g);
	}
	printf("____________________________________________________________");
	printf("____________________________________________________________\n");
	printf("____________________________________________________________");
	printf("____________________________________________________________\n");
	printf("%d gives longest step.\nSteps :%d\n\n%d gives biggest value.\nValue : %d\n",g1,g2,g4,g3);
}
