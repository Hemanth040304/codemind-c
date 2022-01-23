#include<stdio.h>
int main()
{
    int space=1;
    char arr[100];
    scanf("%[^
]s",arr);
    for(int i=0;arr[i]!=NULL;i++)
    {
        if(arr[i]==' ')
        space++;
    }
    printf("%d",space);
}