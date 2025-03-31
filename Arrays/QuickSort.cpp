#include<iostream>
using namespace std;
int partition(int *arr,int s, int e)
{   //select a pivot
    int pivot = arr[s];
    //count the elements lesser than pivot to find its fix position
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
            cnt++;
    }

    //fix the position of pivot
    int pivotindex = s+cnt;
    swap(arr[pivotindex] , arr[s]);

    //now fix the elements around pivot,less than pivot in left side and greater than pivot in right side
    int i = s, j = e;
    while(i<pivotindex && j>pivotindex){
        while( arr[i] < arr[pivotindex])
            i++;
        while( arr[j] > arr[pivotindex])
            j--;

        if(i<pivotindex && j>pivotindex)
            swap(arr[i++] , arr[j--]);
    }

    return pivotindex;
}

void quicksort(int *arr , int s ,int e)
{
    //base case
    if(s>=e)
        return;

   int index =  partition(arr, s , e);

    //sort left part
    quicksort(arr , s , index-1 );
    //sort right part
    quicksort(arr , index + 1 , e);

}

int main()
{   int n =6;
    int a[6] = {200,34,2,0,3,10};
    cout<<"array before sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    quicksort(a , 0 , n-1);
    cout<<"array after sorting: "<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
