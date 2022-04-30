#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,d=0;
        scanf("%d",&a);
        if(a<10 && a>-10)
        {
            d=1;
        }
        else{
            while(a)
            {
                d++;
                a/=10;
            }
        }
        printf("%d ",d);
    }
}