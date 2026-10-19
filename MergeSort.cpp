#include <iostream>
using namespace std;
 
int soBuoc = 0; 
 
void thut(int sau) {
    for (int i = 0; i < sau; ++i) cout << "  ";
}
 
void inDoan(int a[], int x, int y) {
    cout << "[";
    for (int i = x; i <= y; ++i) {
        if (i > x) cout << ", ";
        cout << a[i];
    }
    cout << "]";
}
 
void inMang(int a[], int n, int l, int r, int k) {
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << ", ";
        if (i == l) cout << "{";
        if (i == k) cout << "*" << a[i] << "*";
        else        cout << a[i];
        if (i == r) cout << "}";
    }
    cout << "]";
}
 
void ghiGiaTri(int a[], int n, int k, int giaTri, int l, int r, int sau) {
    if (a[k] == giaTri) return;
    a[k] = giaTri;
    ++soBuoc;
    thut(sau);
    cout << "  Buoc " << soBuoc << ": ";
    inMang(a, n, l, r, k);
    cout << "   <- ghi a[" << k << "] = " << giaTri << "\n";
}
 
void tron(int a[], int n, int l, int m, int r, int sau) {
    thut(sau);
    cout << "Tron " ;
    inDoan(a, l, m);
    cout << " va ";
    inDoan(a, m + 1, r);
    cout << "\n";
 
    int tam[n];
    for (int x = l; x <= r; ++x) tam[x - l] = a[x]; 
 
    int i = 0;        
    int j = m - l + 1;
    int k = l;
    while (i <= m - l && j <= r - l) {
        if (tam[i] <= tam[j]) { ghiGiaTri(a, n, k, tam[i], l, r, sau); ++i; }
        else                  { ghiGiaTri(a, n, k, tam[j], l, r, sau); ++j; }
        ++k;
    }
    while (i <= m - l) { ghiGiaTri(a, n, k, tam[i], l, r, sau); ++i; ++k; }
    while (j <= r - l) { ghiGiaTri(a, n, k, tam[j], l, r, sau); ++j; ++k; }
 
    thut(sau);
    cout << "=> Doan [" << l << ".." << r << "] sau khi tron: ";
    inDoan(a, l, r);
    cout << "\n";
}
 
void mergeSort(int a[], int n, int l, int r, int sau) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    thut(sau);
    cout << "Chia [" << l << ".." << r << "] -> [" << l << ".." << m
         << "] va [" << m + 1 << ".." << r << "]\n";
    mergeSort(a, n, l, m, sau + 1);
    mergeSort(a, n, m + 1, r, sau + 1);
    tron(a, n, l, m, r, sau);
}
 
int main() {
    int n;
    cout << "Nhap so phan tu:\n";
    cin >> n;
    int a[n];
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];
    inDoan(a, 0, n - 1);
    cout << "\n";
    mergeSort(a, n, 0, n - 1, 0);
    inDoan(a, 0, n - 1);
    cout << "\n";
    return 0;
}