#include <stdio.h>
struct point
{
    int x,y;/* data */
};
void modify(struct point* p){
    p->x+=2;
    p->y+=2;
    
}
typedef struct point* P;
P conduct(struct point* p){
    p->x++;
    p->y++;
    return p;
}
int main(){
    struct point A=(struct point){0,0};
    struct point* p1=&A;
    modify(conduct(p1));
    printf("%d %d\n",p1->x,p1->y);
    //printf("%d %d\n",*(&A.x),*(&(p1->y)));
    typedef struct point Point;
    Point B=(Point){0,0};
    Point* p2=&B;
    printf("%d %d",p2->x,p2->y);
}
