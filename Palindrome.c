#include<stdio.h>
int main()
{
    int number,rev=0,temp;
    scanf("%d",&number);
    temp=number;
    while(temp)
    {
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    if(rev==number)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}