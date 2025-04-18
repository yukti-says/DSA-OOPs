#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>nums , int key){
    int n = nums.size();
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        //return case
        if(nums[mid] == key){
            return key;

        }
        if(mid >= start && nums[mid-1] == key){
            return mid-1;
        }

        if(mid <= end && nums[mid+1] == key){
            return mid+1;
        }

        else if(key < nums[mid]){
            end = mid-2;
        }
        else{
            start = mid+2;
        }
    }

    return -1;


}

int main() {
    vector<int> arr = {10 , 20, 30 , 50 , 40 , 60};
    int target = 500;

    int result = search(arr, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
