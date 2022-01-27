#include<stdio.h>
int table(int a,int b)
{
	int i;
	for(i=1;i<=b;i+=2)
	{
		printf("%d X %d = %d\n",a,i,a*i);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	table(a,b);
}
