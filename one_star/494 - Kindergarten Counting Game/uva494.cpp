#include "stdio.h"
#include "ctype.h"
using namespace std;
int main(void){
    char s[1000];
    while(gets(s)){
        int word=0;
        bool ap=false;
        for(int i=0;i<1000;i++){
            if(s[i]=='\0')break;
            if(isalpha(s[i]) && !ap){
                ap=true;
                word++;
            }
            if(!isalpha(s[i]) && ap){
                 ap = false;
            }
        }
        printf("%d\n",word);
    }
    return 0;
}
