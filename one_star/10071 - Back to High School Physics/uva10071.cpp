#include "stdio.h"
#include "stdlib.h"
int main(void){
    int v,t;
    while(scanf("%d %d",&v,&t)!=EOF){
        printf("%d\n",abs(2*v*t));
    }
    return 0;
}
