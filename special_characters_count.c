#include<stdio.h>
int main()
{
    int count=0;
    char str[1000];
    scanf("%[^
]s",str);
    //printf("%s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if((str[i]<65 || str[i]>90) && (str[i]<97 || str[i]>122) && (str[i]<48 || str[i]>57) && str[i]!=' ')
        count++;
    }
    printf("%d",count);
}