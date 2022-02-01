#include<stdio.h>
int fun(int n)
{
	while(n)
	{
		int a,b,i,m,j,k;
		scanf("%d%d",&a,&b);
		int arr[a];
		for(i=0;i<a;i++)
		{
			scanf("%d",&arr[i]);
		}
		m=a-b;
		for(j=m;j<a;j++)
        {
            printf("%d ",arr[j]);
        }
        for(k=0;k<m;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
        n--;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
}
