# include<iostream>
using namespace std;
int getsum(int *arr , int size){
if(size ==0)
    return 0;
if(size ==1)
    return arr[0];
else{
    int getremaining = getsum((arr+1) , size-1);
    int sum = arr[0] + getremaining;
    return sum;

}

}

int main()
{   int size = 6;
    int arr[6] = {1,4,500,6,11,12};
    int  ans = getsum(arr, size);
    cout<<"sum of array elements is: "<<ans;


}


