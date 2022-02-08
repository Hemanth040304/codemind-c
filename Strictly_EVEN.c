#include<stdio.h>
int main()
{
    int n,count=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2 && arr[i]%2==0)
        {
            c++;
            break;
        }
    }
    if(c!=0)
    printf("False");
    else
    printf("True");
}