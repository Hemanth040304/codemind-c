/* count even numbers between odd numbers */
#include<stdio.h>
int fun(int n)
{
    int arr[n],even=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1 && arr[i+2]%2==1 && arr[i+1]%2==0)
        even++;
    }
    printf("%d",even);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
