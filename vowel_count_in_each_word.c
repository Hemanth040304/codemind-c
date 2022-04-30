#include<stdio.h>
int main()
{
    int c=0;
    char str[100];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        c++;
        if(str[i]==' ')
        {
            printf("%d ",c);
            c=0;
        }
    }
    printf("%d",c);
}