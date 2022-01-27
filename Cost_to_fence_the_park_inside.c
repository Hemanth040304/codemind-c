#include<stdio.h>
int area(int l,int b,int w,int c,int area_out)
{
    if(l<=w+w || b<=w+w)
    printf("Impossible");
    else
    {
        area_out=l*b-((l-2*w)*(b-2*w));
        printf("%d",area_out*c);
    }
}
int main()
{
    int l,b,w,c,area_out;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area(l,b,w,c,area_out);
}