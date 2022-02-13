#include<stdio.h>
int fun(int n)
{
    if(n%3==0)
    printf("Pling");
    if(n%5==0)
    printf("Plang");
    if(n%7==0)
    printf("Plong");
    else if(n%3!=0&&n%5!=0&&n%7!=0)
    printf("%d",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}