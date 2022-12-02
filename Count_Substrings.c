#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[100];
        scanf("%s",str);
        int c=0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j< n ; j++){
                if(str[i]=='1' && str[j]=='1')
                c++;
            }
        }
        printf("%d
",c);
    }
}