#include "stdio.h"
#include "stdlib.h"

int main(void){
    int size;
    while(scanf("%d",&size)!=EOF){
        int arr[size];
        for(int i=0;i<size;i++){
            scanf("%d",&(arr[i]));
        }
        bool jolly[size];
        for(int i=1;i<size;i++){
            jolly[i]=false;
        }
        for(int i=0;i<size-1;i++){
            if(abs(arr[i+1]-arr[i])<size)jolly[abs(arr[i+1]-arr[i])]=true;
        }
        bool check=false;
        for(int i=1;i<size;i++){
            if(!jolly[i])check=true;
        }
        if(!check)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
