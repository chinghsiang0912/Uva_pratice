#include "stdio.h"

int main(){

    int size=0;
    scanf("%d",&size);
    while(size--){             // all total
        int A=0,F=0;
        scanf("%d\n%d",&A,&F);

        for(int i=0;i<F;i++){
            for(int j=1;j<=A;j++){
                for(int k=1;k<=j;k++)
                    printf("%d",j);
                printf("\n");
            }
            for(int j=A-1;j>=1;j--){
                for(int k=1;k<=j;k++)
                    printf("%d",j);
                printf("\n");
            }
           if (i != F - 1)
				printf("\n");

        }
        if(size)
        printf("\n");

    }
    return 0;
}
