#include <iostream>
using namespace std;

class sinhvien {
public:
    string ten;
    int mssv;
    string monhoc[5];

    void nhap() {
        
        cout << "Nhap ten: ";
        cin >> ten;
        cout << "Nhap MSSV: ";
        cin >> mssv;
        try {
            int i;
            cout << "Nhap danh sach mon hoc (toi da 5): " << endl;
            for (i = 1; i <= 10; i++) {
                cout << "Mon hoc " << i << ": ";
                cin >> monhoc[i];
                if (i >= 5) {
                    throw "Hoc it thoi";  // Throwing a character exception
            }
            }
        } catch (const char* error) {
            cout << "Hoc it thoi: " << error << endl;
        }
        
        
    }

    void xuat() {
        cout << "Ten: " << ten << ", MSSV: " << mssv << endl;
        cout << "Mon hoc: ";
        for (int i = 0; i < 5; i++) {
            cout << monhoc[i] << endl;
        }
        cout << endl;
    }
};

int main() {
    sinhvien sv;
    sv.nhap();
    // sv.xuat();
    return 0;
}   