#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long D,d,p,q,n,a=0;
        scanf("%lld%lld%lld%lld",&D,&d,&p,&q);
        n = D/d;
        a = n*p*d+(q*(n*(n-1))/2)*d + (D%d)*(p+n*q);
        printf("%lld
",a);
    }
}