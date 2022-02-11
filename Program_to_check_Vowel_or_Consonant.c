#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if('a'==x ||'e'==x||'i'==x||'o'==x||'u'==x||'A'==x||'E'==x||'I'==x||'O'==x||'U'==x)
    printf("Vowel");
    else
    printf("Consonant");
}