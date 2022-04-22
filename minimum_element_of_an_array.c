#include<stdio.h>
#include<limits.h>
int main()
{
    int n,min=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(min>arr[i])
        min=arr[i];
    }
    printf("%d",min);
}