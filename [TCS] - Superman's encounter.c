#include<stdio.h>
int days(int n)
{
    while(1)
    {
        if(n>296)
        {
            n-=296;
        }
        if(n<296)
        {
            return n;
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(int i=0;i<t;i++)
    {
        if(arr[i]>296)
        {
            arr[i]=days(arr[i]);
        }
        if(arr[i]%10==10)
        printf("sunday\n");
        else if(arr[i]%10==1)
        printf("monday\n");
        else if(arr[i]%10==2)
        printf("tuesday\n");
        else if(arr[i]%10==3)
        printf("wednesday\n");
        else if(arr[i]%10==4)
        printf("thursday\n");
        else if(arr[i]%10==5)
        printf("friday\n");
        else if(arr[i]%10==6)
        printf("saturday\n");
        else if(arr[i]%10==7)
        printf("kryptonday\n");
        else if(arr[i]%10==8)
        printf("coluday\n");
        else if(arr[i]%10==9)
        printf("daxamday\n");
    }
}
