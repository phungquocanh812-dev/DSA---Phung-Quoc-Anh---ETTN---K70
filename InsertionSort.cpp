#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main() {
    int A[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n = sizeof(A) / sizeof(A[0]);

    insertionSort(A, n);

    std::cout << "Insertion Sort: ";
    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";

    return 0;
}