#include<stdio.h>
int main()
{
    int c=0,a=0,e=0,i=0,o=0,u=0;
    char str[100];
    scanf("%[^
]s",str);
    //printf("%s",str);
    for(int j=0;str[j]!=NULL;j++)
    {
        if(str[j]=='a')
        a++;
        else if(str[j]=='e')
        e++;
        else if(str[j]=='i')
        i++;
        else if(str[j]=='o')
        o++;
        else if(str[j]=='u')
        u++;
    }
    if(a==0)
    printf("a ");
    if(e==0)
    printf("e ");
    if(i==0)
    printf("i ");
    if(o==0)
    printf("o ");
    if(u==0)
    printf("u ");
    if(a!=0 && e!=0 && i!=0 && o!=0 && u!=0)
    printf("0 ");
}