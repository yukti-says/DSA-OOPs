#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
for(int i=s;i<e;i++){
    cout<<arr[i]<<" ";
} cout<<endl;
}

bool binarysearch(int *arr,int s,int e,int key)


{
    print(arr , s, e);

    //base case
    //for no key found
    if(s>e)
        return false;
    //for key found
        int mid = s+(e-s)/2;
    cout<<"value of mid is: "<<arr[mid]<<endl;
    if(arr[mid]==key)
            return true;


    if(arr[mid]<key){
         return binarysearch(arr,mid+1,e,key);
    }

    else
       {return binarysearch(arr,s,mid-1,key);
       }
}


int main()
{
    int size = 10;
    int arr[10] = {1,2,3,3,8,9,10,11,47,67};
    cout<<"This is your array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<"\nenter a key to check whether it is in array or not: "<<endl;
    cin>>key;
    int start = 0;
    int end = size-1;

    bool ans = binarysearch(arr ,start, end ,key);

    if(ans){
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is not present";
    }
}
