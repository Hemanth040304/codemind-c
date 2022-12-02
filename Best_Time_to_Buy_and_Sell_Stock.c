#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i = 0 ; i<n ;i++){
        for(int j = i+1 ; j< n;j++){
            int d = arr[j]-arr[i];
            if(d>max){
                max=d;
            }
        }
    }
    printf("%d",max);
}