#include<stdio.h>
void fun(int n)
{
    if((n%4==0 && n%100!=0) || n%400==0)
    printf("True");
    else
    printf("False");
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}