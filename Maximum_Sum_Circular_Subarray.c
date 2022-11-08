#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MIN,s = 0;
    for(int i = 0 ; i < n ; i ++){
        int ft=arr[0];
        arr[0]=arr[n-1];
        for(int j = 1 ; j < n ; j++){
            int t = arr[j];
            arr[j]=ft;
            ft=t;
        }
        for(int j = 0 ; j < n; j++){
            s = 0;
            for(int k = j ; k < n ; k++){
                s+=arr[k];
                if(min<s){
                    min=s;
                }
            }
        }
    }
    printf("%d",min);
}