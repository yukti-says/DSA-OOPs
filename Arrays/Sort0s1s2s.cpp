#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,0,2,0,1,2};
    int count0 = 0;
    int count1 =0;
    int count2 = 0;

    for(int i = 0;i<6;i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else if(arr[i] == 2){
            count2++;
        }
        
    }

    for(int i = 0;i<count0;i++){
        arr[i] = 0;
    }
    for(int i = count0;i<count0 + count1;i++){
        arr[i] = 1;
    }
    for(int i = count0+count1 ; i<6;i++){
        arr[i] = 2;
    }

    cout<<"array: "<<endl;
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}