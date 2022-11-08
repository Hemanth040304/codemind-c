#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int k ;
    scanf("%d",&k);
    int i = 0;
    while(k<n){
        if(k==n-1){
            printf("%d %d
",arr[i],arr[k]);
        }
        else{
            printf("%d %d ",arr[i],arr[k]);
        }
        i++,k++;
    }
}