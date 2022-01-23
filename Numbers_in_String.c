#include<stdio.h>
int main()
{
    int sum=0;
    char arr[100];
    scanf("%[^
]s",arr);
    for(int i=0;arr[i]!=NULL;i++)
    {
        if(arr[i]=='1')
        sum+=1;
        else if(arr[i]=='2')
        sum+=2;
        else if(arr[i]=='3')
        sum+=3;
        else if(arr[i]=='4')
        sum+=4;
        else if(arr[i]=='5')
        sum+=5;
        else if(arr[i]=='6')
        sum+=6;
        else if(arr[i]=='7')
        sum+=7;
        else if(arr[i]=='8')
        sum+=8;
        else if(arr[i]=='9')
        sum+=9;
    }
    printf("%d",sum);
}