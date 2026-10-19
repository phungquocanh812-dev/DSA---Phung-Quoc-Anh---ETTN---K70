#include <iostream>
using namespace std;
 
int soBuoc = 0;
 
void inDong(int a[], int n) {
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << ", ";
        cout << a[i];
    }
    cout << "]";
}

void doiCho(int a[], int n, int i, int j) {
    if (i == j) return;
    int tam = a[i];
    a[i] = a[j];
    a[j] = tam;
    ++soBuoc;
    cout << "  Buoc " << soBuoc << ": ";
    inDong(a, n);
    cout << "   <- doi cho a[" << i << "] <-> a[" << j << "]\n";
}
 
int phanHoach(int a[], int n, int l, int r) {
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; ++j) {
        if (a[j] <= pivot) {
            ++i;
            doiCho(a, n, i, j);
        }
    }
    doiCho(a, n, i + 1, r); 
    return i + 1;
}
 
void quickSort(int a[], int n, int l, int r) {
    if (l >= r) return;
    int p = phanHoach(a, n, l, r);
    quickSort(a, n, l, p - 1);
    quickSort(a, n, p + 1, r);
}
 
int main() {
    int n;
    cout << "Nhap so phan tu:\n";
    cin >> n;
    int a[n];
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    inDong(a, n);
    cout << "\n";
    quickSort(a, n, 0, n - 1);
    inDong(a, n);
    return 0;
}