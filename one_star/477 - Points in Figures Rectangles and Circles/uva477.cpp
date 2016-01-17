#include "stdio.h"
#include "math.h"
#define ERROR 1e-9
struct point{
    float x,y;
};
struct reccir{
    char rc;
    point left;
    point right;
    point center;
    float r;
};

bool floatequal(float x,float y){
        return (fabs(x-y)<ERROR);
}

int main(void){
    char r;
    struct reccir rc[11];
    int total=0;
    while(scanf("%c",&r)!=EOF && r!='*'){
        rc[total].rc=r;
        if(r=='r'){
            scanf("%f %f %f %f",&(rc[total].left.x),
                                &(rc[total].left.y),
                                &(rc[total].right.x),
                                &(rc[total].right.y));
        }
        else if(r=='c'){
            scanf("%f %f %f",&(rc[total].center.x),
                             &(rc[total].center.y),
                             &(rc[total].r));
        }
        getchar();
        total++;
    }
    struct point pt;
    int count_pt=1;
    while(scanf("%f %f",&(pt.x),&(pt.y))!=EOF){
        if(floatequal(pt.x,9999.9) && floatequal(pt.y,9999.9))
            break;

        int check=0;
        for(int i=0;i<total;i++){
            if(rc[i].rc=='r'){
                if(pt.x>rc[i].left.x && pt.x<rc[i].right.x)
                    if(pt.y<rc[i].left.y && pt.y>rc[i].right.y){
                        check=1;
                        printf("Point %d is contained in figure %d\n",count_pt,i+1);
                        }
            }
            if(rc[i].rc=='c'){
                double distance=sqrt(pow(rc[i].center.x-pt.x,2.0)+pow(rc[i].center.y-pt.y,2.0));
                if(distance<rc[i].r){
                    check=1;
                    printf("Point %d is contained in figure %d\n",count_pt,i+1);
                    }
            }
        }
        if(check==0)
            printf("Point %d is not contained in any figure\n",count_pt);
        count_pt++;
    }
    return 0;
}
