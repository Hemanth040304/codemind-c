#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
        if(n==0 && sum>9)
        {
            n=sum;
            sum=0;
        }
    }
    printf("%d",sum);
}