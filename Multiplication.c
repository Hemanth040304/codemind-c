#include<stdio.h>
int mult(int a,int b)
{
    printf("%d",a*b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    mult(a,b);
}