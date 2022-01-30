/* count numbers between even and odd numbers or vice versa */
#include<stdio.h>
void fun(int n)
{
    int arr[n],count=0,i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n-2;j++)
    {
        if((arr[j]%2==0 && arr[j+2]%2) || (arr[j]%2 && arr[j+2]%2==0))
        {
            count++;
        }
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
