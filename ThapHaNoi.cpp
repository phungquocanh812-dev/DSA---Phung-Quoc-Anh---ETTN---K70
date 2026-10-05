#include <iostream>
using namespace std;

void thapHaNoi(int n, char nguon, char dich, char trung_gian, int &buoc) {
    if (n == 1) {
        buoc++;
        cout << "Buoc " << buoc << ": Chuyen dia 1 tu coc " << nguon << " sang coc " << dich << "\n";
        return;
    }

    thapHaNoi(n - 1, nguon, trung_gian, dich, buoc);

    buoc++;
    cout << "Buoc " << buoc << ": Chuyen dia " << n << " tu coc " << nguon << " sang coc " << dich << "\n";

    thapHaNoi(n - 1, trung_gian, dich, nguon, buoc);
}

int main() {
    int n;
    cout << "Nhap so luong dia n: ";
    cin >> n;
    int buoc = 0;
    thapHaNoi(n, 'A', 'B', 'C', buoc);
    cout << "Tong so buoc: " << buoc << "\n";
    return 0;
}
