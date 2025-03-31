#include<iostream>
using namespace std;
bool isorted(int *arr, int size){
if (size==0 || size ==1){
    return true;
}
if (arr[0]>arr[1])
    return false;

else{
    bool remaining = isorted(arr+1 , size-1);
    return remaining;
}
}
int main()
{   int size = 6;
    int arr[6] = {1,4,500,6,11,12};
    bool ans = isorted(arr, size);
    if (ans){
        cout<<"array is sorted";
    }
    else
        cout<<"array is not sorted";
}
