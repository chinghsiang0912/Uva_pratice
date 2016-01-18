#include "stdio.h"

int Intlen(long long n){
    int size=0;
    while(n!=0){
        n/=10;
        size++;
    }
    return size;
}
long long reverse(long long n,int size){
    long long rev=0;
    for(int i=0;i<size;i++){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int main(void){
    int number;
    scanf("%d",&number);
    while(number != EOF){
        if(number==0)break;
        unsigned long long n=0;
        scanf("%d",&n);
        int count=0;
        while(true){

            n+=reverse(n,Intlen(n));
            count++;
        if(n==reverse(n,Intlen(n)))break;
        }
        printf("%d %lld\n",count,n);
        number--;
    }
    return 0;
}
