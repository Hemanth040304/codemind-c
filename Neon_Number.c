#include<stdio.h>
int main()
{
    int n,sum=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        sum+=sq%10;
        sq/=10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}