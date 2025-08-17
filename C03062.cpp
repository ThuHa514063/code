#include <stdio.h>

long long ucln(long long a, long long b){
    while (b){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
long long bcnn(long long a, long long b){
    long long temp=ucln(a,b);
    long long res=1ll*a*b/(temp);
    return res;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,m;
        scanf("%d%d", &n, &m);
        long long bsnn=1;
        for (int i=n; i<=m; i++){
            bsnn=bcnn(bsnn, i);
        }
        printf("%lld\n", bsnn);
    }
}