#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
   const int radius = 100;
    class sample{
    privet:
    int midx,midy;
    public:
    void getdata();
    void draw_circle();
    };
    void sample :: getdata(){
        
        midx = getmaxx()/2;
        midy = getmaxy()/2;
        
        }

     void sample :: draw_circle(){
    circle(midx,midy, radius);
    }
           
        void main(void){
        sample obj;
        int gdriver = DETECT,gmode;
        initgraph(&gdriver,&gmod,"\\tc\\bgi");
        obj.getdata();
        obj.draw_circle();
        getch();
        cleardevice();
        closegraph();
        }
