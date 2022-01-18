#include<stdio.h>
int main()
{
    int first,second;
    scanf("%d%d",&first,&second);
    while(first!=second)
    {
        if(first>second)
        {
            first-=second;
        }
        else
        {
            second-=first;
        }
    }
    printf("%d",first);
}