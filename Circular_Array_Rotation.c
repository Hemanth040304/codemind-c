#include<stdio.h>
int main(){
    int n,k,q;
    scanf("%d%d%d",&n,&k,&q);
    int arr[n],a[n],x=0;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    if(k>n){
        k%=n;
    }
    for(int i = n-k ; i < n ; i++){
        a[x++]=arr[i];
    }
    for(int i =0 ; i < n-k ; i++){
        a[x++]=arr[i];
    }
    while(q--){
        int z;
        scanf("%d",&z);
        printf("%d
",a[z]);
    }
}