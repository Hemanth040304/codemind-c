#include<stdio.h>
void fun(int n)
{
    if(n>0)
    printf("Positive Number");
    else
    printf("Negative Number");
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}