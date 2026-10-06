#include <iostream>
using namespace std;

void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int main() {
    int A[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n = sizeof(A) / sizeof(A[0]);
    selectionSort(A, n);
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    return 0;
}