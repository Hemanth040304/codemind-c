#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0 ; i < n-1 ; i++){
            scanf("%d",&arr[i]);
        }
        for(int i = 1 ; i <= n ; i++){
            int c= 0 ;
            for(int j = 0 ; j < n ; j++){
                if(i==arr[j]){
                    c++;
                }
            }
            if(c==0){
                printf("%d
",i);
                break;
            }
        }
    }
}