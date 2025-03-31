#include<iostream>
using namespace std;
 //see how recursive function is working
void print_array(int arr[], int n){
cout<<"size of array: "<<n<<endl;
for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";

} cout<<endl;

}

bool search(int *arr , int size , int  key){
  print_array(arr , size);
 if (size ==0)
    return false;

 if (arr[0] ==key)
    return true;

 else{

 bool index;
 index = search(arr+1 , size-1 , key);
return index;
  }

 }




int main()
{
    int size = 10;
    int arr[10] = {12,2,3,45,57,3,8,9,10,11};
    cout<<"This is your array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<"\nenter a key to check whether it is in array or not: "<<endl;
    cin>>key;

    bool ans = search(arr , size ,key);

    if(ans){
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is not present";
    }
}
