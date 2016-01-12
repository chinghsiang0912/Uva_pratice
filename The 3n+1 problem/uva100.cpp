#include "stdio.h"

int f(int);
int t_max=0;
int main(void){
    int num1=0,num2=0;
    while(scanf("%d %d",&num1,&num2)!=EOF ){
        printf("%d %d ",num1,num2);
        if(num1>num2){
            int r=num1;
            num1=num2;
            num2=r;
        }
        int max=0;
        for(int i=num1;i<=num2;i++){
            t_max=0;
            f(i);
            if(max<t_max) max=t_max;
        }
        printf("%d\n",max);
    }
    return 0;
}
int f(int n){
    t_max++;
    if(n==1)return 1;
    else if(n%2==1) return f(n*3+1);
    else return f(n/2);
}
