#include<stdio.h>
int main(){
    int n , cost = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i+1]>arr[i]){
            cost += arr[i+1]-arr[i];
        }
    }
    printf("%d",cost);
}