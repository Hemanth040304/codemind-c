#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n],c=0;
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&arr[i]);
            if(arr[i]%2==1){
                c++;
            }
        }
        if(c%2==1){
            c--;
        }
        printf("%d
",c/2);
    }
}