#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int c=0;
    for(int i = 0 ; i < n ; i++){
        c+=arr[i];
        if(max<c){
            max=c;
        }
        if(c<0){
            c=0;
        }
    }
    printf("%d
",max);
}