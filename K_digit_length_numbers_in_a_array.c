#include<stdio.h>
int main()
{
    int n,x,c=0;
    scanf("%d%d",&n,&x);
    int arr[n];
    for(int i=0,d;i<n;i++)
    {
        d=0;
        scanf("%d",&arr[i]);
        if(arr[i]<10 && arr[i]>-10)
        d=1;
        else
        {
            while(arr[i])
            {
                d++;
                arr[i]/=10;
            }
        }
        if(d==x)
        c++;
    }
    printf("%d",c);
}