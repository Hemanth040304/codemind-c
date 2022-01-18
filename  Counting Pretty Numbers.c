#include<stdio.h>
int main()
{
    int number,first,last,count=0;
    scanf("%d",&number);
    while(number)
    {
        scanf("%d%d",&first,&last);
        count=0;
        while(first<=last)
        {
            if(first%10==2||first%10==3||first%10==9)
            {
                count++;
            }
            first++;
        
        }
        number--;
        printf("%d
",count);
    }
}