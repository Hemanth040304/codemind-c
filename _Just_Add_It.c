#include<stdio.h>
#define mod 10000007
typedef long long ll;
ll mult(ll a,ll b){
    ll ans = 1;
    while(b > 0){
        if(b % 2)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return ans;
}

int main(){
    ll n,k;
    while(1){
        scanf("%lld%lld",&n,&k);
        if(n==0 && k==0)
            return 0;
        else{
            ll a,b,c,d;
            a = (2*mult(n-1,n-1))%mod;
            b = (2*mult(n-1,k))%mod;
            c = mult(n,k);
            d = mult(n,n);
            ll res = (a+b+c+d)%mod;
            printf("%lld
",res);
        }
    }
}