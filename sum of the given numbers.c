#include<stdio.h>
int main()
{
    int n,first,last;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d%d",&first,&last);
        printf("%d
",first+last);
        n--;
    }
}