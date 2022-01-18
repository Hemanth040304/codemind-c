#include<stdio.h>
int main()
{
    int first,last;
    scanf("%d%d",&first,&last);
    for(int i=1;i;i++)
    {
        if((first*i)%last==0)
        {
            printf("%d",first*i);
            break;
        }
    }
}