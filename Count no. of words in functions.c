#include<stdio.h>
char word(char *str,int count)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		count++;
	}
	printf("%d",count);
}
int main()
{
	int count=1;
	char str[1000];
	scanf("%[^\n]s",str);
	word(str,count);
}
