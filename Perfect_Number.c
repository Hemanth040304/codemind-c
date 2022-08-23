#include<stdio.h>
int main()
{
    int n,fact=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            fact+=i;
        }
    }
    if(fact==n)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}