#include "stdio.h"


int main(void){
    int size=0,count=1;
    while(scanf("%d",&size)!=EOF ){
        if(size==0) break;
        int arr[size]={0};
        int total=0;
        for(int i=0;i<size;i++){
            scanf("%d",&(arr[i]));
            total+=arr[i];
        }
        int avg=total/size;
        int ans=0;
        for(int i=0;i<size;i++){
            if(arr[i]>avg){
                ans+=(arr[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",count,ans);

        count++;

    }
    return 0;
}
