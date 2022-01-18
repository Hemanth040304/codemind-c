#include<stdio.h>
int main()
{
    int number,first=0,second=1,next;
    scanf("%d",&number);
    printf("%d %d ",first,second);
    number-=2;
    while(number)
    {
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;
        number--;
    }
}