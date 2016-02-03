#include "stdio.h"
#include <algorithm>

int main(void){
    int arr[10001];
    int num;
    int index=0;
    while(scanf("%d",&num)!=EOF){
    arr[index]=num;
    if(index!=0)
    std::sort(arr,arr+index+1);
    if((index+1)%2==1)
        printf("%d\n",arr[(index+1)/2]);
    else
        printf("%d\n",(arr[(index+1)/2]+arr[(index+1)/2-1])/2);
    index++;
    }
    return 0;
}
