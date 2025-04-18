#include<iostream>
using namespace std;

int main() {
    int arr[7] = {3, 3, 3, 3, 1, 2, 2};
    int n = 7;
    
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > n / 2) {
            cout << "The majority element is: " << arr[i] << endl;
            return 0; // Stop after finding the majority
        }
    }

    cout << "No majority element found." << endl;
    return 0;
}
