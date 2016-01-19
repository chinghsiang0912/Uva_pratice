#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "algorithm"



int main(void){
    char s_arr[1001];
    bool blank=0;
    while(gets(s_arr)){
        if(blank)
        printf("\n");
        int len= strlen(s_arr);
        std::sort(s_arr,s_arr+len);
        std::reverse(s_arr,s_arr+len);
        int ascii[128]={0};
        for(int i=0;i<len;i++){
            ascii[s_arr[i]]++;
        }
        for(int i=1;i<=len;i++){
            for(int j=127;j>=0;j--)
            if(ascii[j]==i) printf("%d %d\n",j,ascii[j]);
        }
    blank=true;
    }
    return 0;
}
