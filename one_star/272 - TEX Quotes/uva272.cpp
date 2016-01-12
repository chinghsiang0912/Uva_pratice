#include "stdio.h"
#include "stdlib.h"
int main(void){
    char s[500];
    int c=0;
    while(gets(s)){
        for(int i=0;i<500;i++){
            if(s[i]=='\0'){break;}
            if(s[i]=='\"'){
                c++;
                if(c%2==1)printf("``");
                else printf("''");
            }
            else
                printf("%c",s[i]);

        }
        printf("\n");
    }
    return 0;
}
