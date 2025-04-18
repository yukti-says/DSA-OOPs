//Array rotation
#include<iostream>
using namespace std;
int main(){
int size=8;
int a[size]={1,2,3,4,5,6,7,8};

int shift_count=3;
//for left
while(shift_count){
        int temp=a[0];
        for(int i=0;i<size-1;i++){
            a[i]=a[i+1];


        }
         a[size-1]=temp;
    shift_count--;


}
for(int i=0;i<8;i++){
    cout<<a[i]<<" ";
}
}

// //for right
// while(shift_count){
//         int temp=a[size-1];
//         for(int i=size-1;i>=1;i--){
//             a[i]=a[i-1];


//         }
//          a[0]=temp;
//     shift_count--;


// }
