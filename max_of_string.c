#include<stdio.h>
int main()
{
    char arr[100],max='A';
    scanf("%[^
]s",arr);
    for(int i=0;arr[i]!=NULL;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%c",max);
}