#include<stdio.h>
int main()
{
    int number,sq=0;
    scanf("%d",&number);
    for(int i=1;i*i<=number;i++)
    {
        if(i*i==number)
        {
            sq++;
        }
    }
    if(sq==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}