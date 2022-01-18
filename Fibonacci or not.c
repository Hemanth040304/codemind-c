#include<stdio.h>
int main()
{
    int first=0,second=1,next=0,number;
    scanf("%d",&number);
    while(number>next)
    {
        next=first+second;
        first=second;
        second=next;
    }
    if(number==next)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}