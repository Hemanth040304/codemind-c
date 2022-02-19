#include<stdio.h>
int main()
{
    char str[100];
    int i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++);
    
    for(int temp,j=0,k=i-1;j<k;j++,k--)
    {
        temp=str[j];
        str[j]=str[k];
        str[k]=temp;
    }
    printf("%s",str);
}