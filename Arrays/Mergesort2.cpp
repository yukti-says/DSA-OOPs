#include<iostream>
using namespace std;
void merge(int *a , int s , int e){

  int mid = (s+e)/2;

  int sizea = mid - s +1;
  int sizeb = e-mid;

  //create new arrays
  int *a1 = new int[sizea];
  int *a2 = new int[sizeb];

  //copy
  int aindex = s;
  for(int i=0;i<sizea ; i++){
    a1[i] = a[aindex++];
  }

  for(int i=0;i<sizeb ; i++){
    a2[i] = a[aindex++];
  }


  //now sort and merge
  int i = 0, j = 0;
  aindex = s;
  while(i < sizea && j< sizeb){
    if(a1[i]<a2[j])
        a[aindex++] = a1[i++];
    else
        a[aindex++] = a2[j++];

  }

  while(i< sizea)
    a[aindex++] = a1[i++];

  while(j < sizeb)
    a[aindex++] = a2[j++];




}


void mergesort(int *a ,int s, int e){
//base
  if(s>=e)
    return;

  int mid = (s+e)/2;
  //sort left side
  mergesort(a, s , mid);
  //sort right
  mergesort(a , mid+1 , e);

  //merge
  merge(a , s , e);


}



int main()
{
    int a[6] = {2,34,0,45,6,5};
    int n = 6;
    mergesort(a , 0 ,n-1);
    cout<<"array after sorting: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
