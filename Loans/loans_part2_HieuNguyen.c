#include<string.h>
#include <stdio.h>
#include <stdlib.h>
  struct point { int x, y; };
  struct rect
  {
    struct point upperLeft; 
    struct point lowerRight;
    char* name;
  };
  
struct point Center(struct rect r)
{
struct point cen;
cen.x = (r.upperLeft.x + r.lowerRight.x)/2;
cen.y = (r.upperLeft.y + r.lowerRight.y)/2;
return cen;
}
struct rect move(struct rect r, int a, int b)
{
    struct rect Move;
    Move.upperLeft.x=r.upperLeft.x+=a;
    Move.lowerRight.x = r.lowerRight.x+=a;
    
    Move.upperLeft.y = r.upperLeft.y+=b;
    Move.lowerRight.y = r.lowerRight.y+=b;
    
    return Move;
}
int main()
{
   
    struct rect r;
    r.upperLeft.x=0;
    r.lowerRight.x=2;
    r.upperLeft.y=10;
    r.lowerRight.y=0;
    struct point center = Center(r);
    printf("Center is x:%d,y:%d\n\n",center.x,center.y);
    
    
    int x=2, y =2;
    r=move(r,x,y);
    printf("rect of R when update after move 2 unit up and right\nUpper left:%d,%d,Lower right:%d,%d\n\n",r.upperLeft.x,r.upperLeft.y,r.lowerRight.x,r.lowerRight.y);
   
    
     struct rect *p;
    p->upperLeft.x=9;
    p->lowerRight.x=2;
    p->upperLeft.y=8;
    p->lowerRight.y=1;
    
    printf("pointer to  point on upper left (9,8) and point for lower right (2,1)\nFor x: %d,%d For y:%d,%d\n\n",p->upperLeft.x,p->upperLeft.y, p->lowerRight.x, p->lowerRight.y);
   
    
    struct rect *q;
    q=(struct rect*)malloc(sizeof(struct rect));
    q->upperLeft.x = 9;
    q->upperLeft.y = 8;
    q->lowerRight.x = 2;
    q->lowerRight.y = 1;
    q->name = (char*)malloc(sizeof(char)*50);
    strcpy(q->name,"MyRect");
    printf("upper right value is : x=%d,y=%d\n",q->upperLeft.x,q->upperLeft.y);
    printf("lower right value is : x=%d,y=%d\n",q->lowerRight.x,q->lowerRight.y);
    printf("name is : %s",q->name);
    return 0;
}