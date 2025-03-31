#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int x,y;
    printf("enter two values: ");
    scanf("%d%d",&x,&y);
    while(1){
    printf("\n 1.Addition");
    printf("\n 2.substraction");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\n 5.exit");
    printf("\n enter your choice");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("\n addition of two numbers %d,%d is %d ",x,y,x+y);
        break;
    case 2:
        printf("\n substraction of entered number %d,%d is %d ",x,y,x-y);
         break;
    case 3:
        printf("\n multiplication of entered numbers %d,%d is %d",x,y,x*y);
         break;
    case 4:
        printf("\n division of numbers is %d ",x/y);
         break;
    case 5:
        exit(0);
    default:
        printf("\n over!!");
    }}
    return 0;
    getch();
}
