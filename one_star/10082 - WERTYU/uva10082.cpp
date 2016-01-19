#include "stdio.h"
#include "string.h"
int main(void){
    char s[5000];
    while(gets(s)){
        char key[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='Q' || s[i]=='A' || s[i]=='Z' || s[i]==' ' || s[i]=='\n')printf("%c",s[i]);
            else{
                for(int j=0;j<strlen(key);j++){
                    if(s[i]==key[j]){
                        printf("%c",key[j-1]);
                    }
                }
            }

        }
        printf("\n");
    }
    return 0;
}
