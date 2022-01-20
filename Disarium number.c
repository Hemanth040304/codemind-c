#include<stdio.h>
#include<math.h>
int main()
{
    int number=0,rev,temp,sum=0;
    scanf("%d",&rev);
    temp=rev;
    while(rev)
    {
        number=(number*10)+(rev%10);
        rev/=10;
    }
    for(int i=1;number;i++)
    {
        sum+=pow(number%10,i);
        number/=10;
    }
    if(temp==sum)
    printf("True");
    else
    printf("False");
}