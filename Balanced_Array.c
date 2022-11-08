#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&arr[i]);
        }
        int k = 0 ;
        for(int i = 0 ; i < n ; i++){
            int f = 0,s = 0;
            for(int j = 0 ; j < i ; j++){
                f+=arr[j];
            }
            for(int j = i+1 ; j < n ; j++){
                s+=arr[j];
            }
            if(f==s){
                k++;
            }
        }
        if(k==0){
            printf("NO
");
        }
        else{
            printf("YES
");
        }
    }
}