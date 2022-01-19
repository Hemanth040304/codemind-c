#include<stdio.h>
int main()
{
    int number;
    float sum;
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        sum+=1/(i*1.0);
    }
    printf("%.2f",sum);
}