#include "stdio.h"
#include "math.h"
#define ERROR 1e-9
struct point{
    float x,y;
};
struct rectangle{
    point left;
    point right;
};
bool floatequal(float x,float y){
    return (fabs(x-y)< ERROR);
}
int main(void){
    char r;
    int total=0;
    struct rectangle rec[11];
    while(scanf("%c",&r)!=EOF && r!='*'){
        scanf("%f %f %f %f",&(rec[total].left.x),
                            &(rec[total].left.y),
                            &(rec[total].right.x),
                            &(rec[total].right.y));
        total ++;
        getchar();      // delete the enter key
    }
    struct point p;
    int count_point=1,check=0;
    while(scanf("%f %f",&(p.x),&(p.y))!=EOF){
        if(floatequal(p.x,9999.9) && floatequal(p.y,9999.9))
            break;
        check=0;
        for(int i=0;i<total;i++){
            if(p.x>rec[i].left.x && p.x<rec[i].right.x)
                if(p.y<rec[i].left.y && p.y>rec[i].right.y)  { check=1;
            printf("Point %d is contained in figure %d\n",count_point,i+1);}
        }
        if(check==0)printf("Point %d is not contained in any figure\n",count_point);
        count_point++;

    }
    return 0;
}
