#include<stdio.h>
int main()
{
    int number,count=0;
    scanf("%d",&number);
    for(int i=1;i<=number/2;i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}