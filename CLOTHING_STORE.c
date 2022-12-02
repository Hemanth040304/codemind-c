#include<stdio.h>
int main(){
    int n,c=0; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            if(i!=j && arr[i]==arr[j] && arr[i]!=0 &&arr[j]!=0){
                c++;
                arr[i]=0;
                arr[j]=0;
            }
        }
    }
    printf("%d",c);
}