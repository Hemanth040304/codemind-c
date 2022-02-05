#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    scanf("%d%d%d",&a,&b,&c);
    s=(a*1.0+b*1.0+c*1.0)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
}