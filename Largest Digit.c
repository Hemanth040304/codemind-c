#include<stdio.h>
int main()
{
    int number,largest=0,x;
    scanf("%d",&number);
    while(number)
    {
        x=number%10;
        if(x>largest)
        {
            largest=x;
        }
        number/=10;
    }
    printf("%d",largest);
}