#include<stdio.h>
int main()
{
    int number,rev=0;
    scanf("%d",&number);
    while(number)
    {
        rev=(rev*10)+(number%10);
        number/=10;
    }
    printf("%d",rev);
}