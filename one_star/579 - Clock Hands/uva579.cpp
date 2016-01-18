#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main(void){

    int h,m;
    while(scanf("%d:%d",&h,&m)!=EOF ){
        if(h==0 && m==0)break;
        float h_angle=0.0,m_angle=m*6.0;
        if(h==12.0 && m==0.0)   h_angle=0.0;
        else    h_angle=h*30.0+m*0.5;
        float angle=h_angle-m_angle;
        if(angle<0) angle*=(-1.0);
        if(angle>180)angle=360-angle;
        printf("%.3f\n",angle);
    }
    return 0;
}

