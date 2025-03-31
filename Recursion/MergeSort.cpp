#include<iostream>
using namespace std;


void merge(int *arr , int s ,int e){
 int mid = (s+e)/2;

 //get size for both arrays to copy
 int sizea = mid-s+1;
 int sizeb = e-mid;

 //create two arrays
 int *a = new int[sizea];
 int *b = new int[sizeb];

 //now copy
 //create starting  indexes for arrays
 int k =s;
 for(int i=0;i<sizea;i++){
    a[i] = arr[k++];
 }
 k = mid+1;
 for(int i=0;i<sizeb;i++){
    b[i] = arr[k++];
 }

 //now merge both sorted arrays
 //first creating indexes
 int i=0;
 int j=0;
  k=s; //we are not creating here a new mainarray jo array aaaya tha usi me sorted array daal rahe h and starting k = start se
 while(i <sizea && j < sizeb){
    if(a[i]<b[j])
        arr[k++] = a[i++];
    else
        arr[k++] = b[j++];
 }

 //for remaining elements
 while(i < sizea)
      arr[k++] = a[i++];
 while(j < sizeb)
      arr[k++] = b[j++];


}

void mergesort(int *a, int s , int e ) {

        //base case
           if(s>=e){ //here is s==e hua mean one element thus already sorted hi hoga so return
            return;
           }
        int mid =(s+e)/2;
        //sort for left
        mergesort(a , s , mid);
        //sort for right
        mergesort(a , mid+1 , e);
        //now merge
        merge(a , s , e);

}

int main()
{   int n = 5;
    int a[5] = {10,2,20,35};
    cout<<"before sorting: "<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl;

    mergesort(a , 0 , n-1);
    cout<<"after sorting: "<<endl;
    for (int i = 0; i <n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    cout<<endl;
    return 0;

}
