/* count of given element in an array */
#include<stdio.h>
int fun(int n)
{
    int arr[n],x,count=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        count++;
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
