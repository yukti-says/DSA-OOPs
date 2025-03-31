#include <stdio.h>
float area(int);
int main()
{
   int x;
   float y;
   printf("enter the radius");
   scanf("%d",&x);
   y=area(x);
   printf("area of circle is %f",y);
   return 0;

}
 float area(int r)
 {
     float ar;
     ar=3.14*r*r;
     return ar;
 }
