#include "stdio.h"
#include "stdlib.h"

int main(void){
    char s[500];
    const int K = (int)('*'-'1');
    while(gets(s)){
        for(int i=0;i<500;i++){
            if(s[i]=='\0')break;
            printf("%c",s[i]+K);

        }
        printf("\n");
    }
    return 0;
}
