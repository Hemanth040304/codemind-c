#include<stdio.h>
int main()
{
    int number,rev,sum=0;
    scanf("%d",&number);
    rev=number;
    while(rev)
    {
        sum+=rev%10;
        rev/=10;
    }
    if(number%sum==0)
    printf("True");
    else
    printf("False");
}