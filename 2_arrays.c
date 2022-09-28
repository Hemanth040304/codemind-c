#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],brr[n];
    int c = 0,count = 0 ,asum=0 , bsum=0;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==-1){
            c++;
        }
        else{
            asum+=arr[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&brr[i]);
        if(brr[i]==-1){
            c++;
        }
        else{
            bsum+=brr[i];
        }
    }
    if(c==2){
        printf("Infinite
");
    }
    else{
        for(int i = 0 ; i <100000 ; i++){
            if(i+asum==bsum){
                count++;
            }
        }
        printf("%d
",count);
    }
}