#include<stdio.h>
int main()
{
    int element,number,temp,rev=0;
    scanf("%d",&element);
    while(element)
    {
        scanf("%d",&number);
        if(number<0)
        {
            printf("False
");
            element--;
            continue;
        }
        temp=number,rev=0;
        while(temp)
        {
            rev=rev*10+(temp%10);
            temp/=10;
        }
        if(temp==0 && rev==number)
        {
            printf("True
");
        }
        else if(temp==0 && rev!=number)
        {
            printf("False
");
        }
        element--;
    }
}