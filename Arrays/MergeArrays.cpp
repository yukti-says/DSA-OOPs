#include <iostream>
using namespace std;

void merge(int *a, int *b, int sizea, int sizeb) {
    int totalSize = sizea + sizeb;
    int *c = new int[totalSize]; // Dynamically allocate memory for the merged array
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < sizea && j < sizeb) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Add remaining elements from array a
    while (i < sizea) {
        c[k++] = a[i++];
    }

    // Add remaining elements from array b
    while (j < sizeb) {
        c[k++] = b[j++];
    }

    // Output the merged array
    for (int i = 0; i < totalSize; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    delete[] c; // Free the dynamically allocated memory
}

int main() {
    int n = 5;
    int a[5] = {1, 2, 3, 4, 5};
    int m = 5;
    int b[5] = {10, 20, 30, 40, 50};
    merge(a, b, n, m);
    return 0;
}




