#include<stdio.h>
int divi(int a,int b)
{
    printf("%d",a/b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    divi(a,b);
}