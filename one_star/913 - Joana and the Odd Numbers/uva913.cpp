#include "stdio.h"

int main(void){
    int n;
    while(scanf("%d",&n)!=EOF){
        long long max=(n+1)/2;
        long long avg=max*max*2-3;
        long long ans=avg*2+avg;
        printf("%lld\n",ans);
    }
    return 0;
}
