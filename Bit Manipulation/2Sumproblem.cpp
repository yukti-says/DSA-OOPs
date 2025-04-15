#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool twoum(vector<int> v , int n , int target){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++)
        if(v[i]+v[j] ==target){
            return true;
        }
    }
    return false;
}

int main()
{
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // vector<int> v(n);
    // cout<<"Enter the elements of array: ";
    // for(int i = 0;i<n;i++){
    //     cin>>v[i];
    // }
    // int target;
    // cout<<"Enter the target sum: ";
    // cin>>target;
    int n = 5;
    vector<int> v = {1,2,3,4,5};
    int target = 16;
    if(twoum(v,n,target)){
        cout<<"Pair found"<<endl;
    }else{
        cout<<"Pair not found"<<endl;
    }
    return 0;
}