#include "stdio.h"

int main(void){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0 && m==0)break;
        if(n<m){
            int r=n;
            n=m;
            m=r;
        }
        int carry=0,count=0;
        while(n!=0){
            if(n%10+m%10+carry>9)
            {
                carry=1;
                count++;
            }
            else carry=0;

            n/=10;
            m/=10;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",count);
    }
    return 0;
}
