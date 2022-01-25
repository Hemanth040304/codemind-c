#include<stdio.h>
int main()
{
    int number,rev=0,sqnum,sqrev,temp,num=0,temp1;
    scanf("%d",&number);
    sqnum=number*number;
    temp=number;
    while(temp)
    {
        rev=(rev*10)+temp%10;
        temp/=10;
    }
    sqrev=rev*rev;
    temp1=sqrev;
    while(temp1)
    {
        num=(num*10)+temp1%10;
        temp1/=10;
    }
    if(sqnum==num)
    printf("True");
    else
    printf("False");
}