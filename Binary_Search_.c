#include<stdio.h>
int main(){
    int n,k,c=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==k){
            c=i;
        }
    }
    if(c==0){
        printf("-1");
    }
    else{
        printf("%d",c);
    }
}