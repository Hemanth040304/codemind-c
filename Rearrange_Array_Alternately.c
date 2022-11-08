#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        int arr[n], rearr[n];
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&arr[i]);
        }
        int x=0,y=n-1,i=0;
        while(y>=x){
            if(y==x){
                rearr[i++]=arr[y];
            }
            else{
                rearr[i++]=arr[y];
                rearr[i++]=arr[x];
            }
            y--;
            x++;
        }
        for(int i = 0 ; i < n ; i++){
            if(n-1==i){
                printf("%d
",rearr[i]);
            }
            else{
                printf("%d ",rearr[i]);
            }
        }
    }
}