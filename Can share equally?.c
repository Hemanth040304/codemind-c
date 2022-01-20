#include<stdio.h>
int main()
{
    int one,two;
    scanf("%d%d",&one,&two);
    if(one%2==0 && (one>0||two%2==0))
    printf("YES");
    else
    printf("NO");
}