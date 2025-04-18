#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> nums, int key) {
    int n = nums.size();
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        // Calculate mid
        int mid = start + (end - start) / 2;

        // Check if the key is at mid
        if (nums[mid] == key) {
            return mid;
        }

        // Check if the left part is sorted
        if (nums[start] <= nums[mid]) {
            // Check if the key lies in the left part
            if (nums[start] <= key && key <= nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // Otherwise, the right part must be sorted
        else {
            // Check if the key lies in the right part
            if (nums[mid] <= key && key <= nums[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1; // Key not found
}

int main() {
    vector<int> arr = {11, 12, 15, 18, 2, 5, 6, 8};
    int target = 8;

    int result = search(arr, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
