#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool twoum(vector<int> v , int n , int target){
    sort(v.begin() , v.end());
    int left = 0;
    int right = n-1;
    while(left<right){
        if(v[left]+v[right] == target){
            return true;

        }
        else if(v[left]  + v[right] < target)
        left ++;
        else right --;
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
    vector<int> v = {5,3,1,2,4};
    int target = 20;
    if(twoum(v,n,target)){
        cout<<"Pair found"<<endl;
    }else{
        cout<<"Pair not found"<<endl;
    }
    return 0;
}