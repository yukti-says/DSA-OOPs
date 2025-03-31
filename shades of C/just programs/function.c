#include <stdio.h>
struct emp{
int id;
char name[20];
int salary;
};
struct emp empdetail(){
    int i;
struct emp d1[];
//for(int i=0;i<=9;i++)
printf("enter the details:");
scanf("%d %d",&d1.id,&d1.salary);
fgets(d1.name,20,stdin);
scanf("%d",&d1.salary);
return d1;
}
void showdetail(){
struct emp x;
printf("id: %d\nname: %ssalary: %d",x.id,x.name,x.salary);

 }



int main(){
    struct emp s1[3];
    printf("you have to enter details here..\n");
    for(int i=0;i<=2;i++)
      s1[i]=empdetail();

    for(int i=0;i<=2;i++)
      showdetail(s1[i]);
   // s1[i]=greatsalary();
   //greatsalary(s1.salary);
}
