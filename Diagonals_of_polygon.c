#include<stdio.h>
void dop(int n)
{
    printf("%d",(n*(n-3))/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    dop(n);
}