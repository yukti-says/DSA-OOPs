#include<iostream>
using namespace  std;
int top = -1;
int stack[100];
void push( int n)
{
  top++;
  stack[top] = n;
  for(int i = 0;i<= top;i++)
  {
    cout<<stack[i];
  }
}
int main()
{
    int n = 113;
    while(n != 0){
        int r = n % 2;
        push(r);
        n = n / 2;
    }
}