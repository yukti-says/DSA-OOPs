#include<iostream>
using namespace std;
void sortarray(int *arr , int size){
  //base case
  if(size == 0 || size == 1)
    return;

  //case 1
  for(int i =0;i<size-1;i++){
    if(arr[i] > arr[i+1])
        swap(arr[i] , arr[i+1]);
  }

  sortarray(arr , size -1);

}

int main()
{
    int a[5] = {10,223,23,2,1};
    int size =5;
    sortarray(a, size);
    for(int i =0;i<size ;i++){
        cout<<a[i]<<" ";
    }

}
