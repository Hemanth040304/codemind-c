#include<stdio.h>
int main()
{
    int number,sum=0,pro=1;
    scanf("%d",&number);
    while(number)
    {
        sum+=number%10;
        pro*=number%10;
        number/=10;
    }
    if(sum==pro)
    {
        printf("Spy Number
");
    }
    else 
    {
        printf("Not Spy Number
");
    }
}