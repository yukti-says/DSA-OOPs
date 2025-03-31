//koi sa to code h ye
#include <stdio.h>
#include<conio.h>
int main()
{
    int x,r,b,l,i,j,k;
    float a,ar,avg;
    printf("\n 1.area of circle\n");
    printf("\n 2. area of rectangular\n");
    printf("\n 3.average of three numbers\n");
    printf("\n exit\n");
    printf("enter your choice\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("enter radius of circle.");
        scanf("%d",&r);
        a=r*r*3.14;
        printf("the area of circle is %f",a);
        break;
    case 2:
        printf("enter the length and breadth of a rectangle");
        scanf("%d%d",&l,&b);
        ar=l*b;
        printf("the area of rectangle is %f",ar);
        break;
    case 3:
        printf("enter the three numbers..");
        scanf("%d%d%d",&i,&j,&k);
        avg=i+j+k/3.0;
        printf("the avg of three numbers is %f",avg);
        break;
    case 4:
        printf("you are exit from the code world");
        break;
    default:
        printf("you are out of code\n");
    }
    return 0;

}
