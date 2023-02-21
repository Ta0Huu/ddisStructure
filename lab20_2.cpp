#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){
    double x1 = max(r1->x,r2->x)-min(r1->x+r1->w,r2->x+r2->w);
    double y1 = max(r1->y-r1->h,r2->y-r2->h)-min(r1->y,r2->y);
    if(x1*y1 <= 0)return 0;
    return x1*y1;    
}