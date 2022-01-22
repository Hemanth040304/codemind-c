#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    int sum=0,arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    array:
    sum+=arr[x];
    x++;
    if(x<n)
    goto array;
    printf("%d",sum);
}