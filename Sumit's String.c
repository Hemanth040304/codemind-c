#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    scanf("%d",&n);
    while(n--){
        char str[1000];
        scanf("\t%[^\n]s",str);
        int c = 0 ,length = 1;
        for(int i = 1 ; str[i] != '\0' ; i++){
            if(abs(int(str[i-1])-int(str[i]))==1){
                c++;
            }
            length++;
        }
        if(length-1==c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
