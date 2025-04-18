#include<iostream>
#include<vector>
using namespace std;

int majorityelement( vector<int>arr){
 int count = 0;
 int count1 = 0;
 int element = 0;
 //traverse
 for(int i = 0;i<arr.size();i++){
    //now check is count == 0
    if(count == 0){
        count =1;
        element = arr[i];
    }
    //check if next comming element is same as element(variable)
    else if(element == arr[i]){
        count ++;

    }
    //if element is not same decrease the count
    else {
        count --;
    }
 }
  //now check if the element occured in actual or not element that has not count 0  so we are checking its occurance now bz upper code just tell if count is not 0 meant element is there at last
  for(int i = 0;i<arr.size();i++){
    if(arr[i] == element){
        count1++;
    }

  }
   if(count1 > arr.size()/2){
    return element;
   }

   return -1;

}

int main(){
    vector<int>a = {12,13,14,12,12,12,13,12};
    int element = majorityelement(a);
    cout<<"majority element is: "<<element;
    
}

/*
The Boyer-Moore step may give you a candidate that isn't really the majority (especially if there’s no majority).

So we manually count how many times it appears.

If cnt > l/2, we confirm it is the majority.

Otherwise, return -1 or handle accordingly.


*/