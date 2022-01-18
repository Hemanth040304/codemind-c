#include<stdio.h>
int main()
{
    int first,last;
    scanf("%d%d",&first,&last);
    for(int i=1;i<=last;i+=2)
    {
        printf("%d x %d = %d
",first,i,first*i);
    }
}