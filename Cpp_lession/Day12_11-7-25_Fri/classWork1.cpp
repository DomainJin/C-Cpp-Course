#include <iostream>
using namespace std;

class HocVien {
    public:
        int id;
        string name;
        int yearOfBirth;
        HocVien(){
            id = 0;
            name = "";
            yearOfBirth = 0;
        }
};

class DanhSachHocVien : public HocVien {

    public:
        int n;
        HocVien* ds;
        void nhapSoLuong() { 
            cout << "Nhap so luong hoc vien: ";
            cin >> n; 
            ds = new HocVien[n];
        }
        
        // int *ptr = &n;
        // hocVien ds[*ptr];

        
        
        void nhapDanhSach() {
            for (int i = 0; i < n; i++) {
                cout << "Nhap thong tin hoc vien thu " << i + 1 << ":" << endl;
                cout << "Nhap ID: ";
                cin >> ds[i].id;
                cout << "Nhap ten: ";
                cin >> ds[i].name;
                cout << "Nhap nam sinh: ";
                cin >> ds[i].yearOfBirth;
            }
        }
        void locNamSinh() {
            cout << "Hoc vien sinh truoc nam 1999: " << endl;
            for (int i = 0; i < n; i++) {
                if (ds[i].yearOfBirth < 1999) {
                    cout << "ID: " << ds[i].id << ", Ten: " << ds[i].name << ", Nam sinh: " << ds[i].yearOfBirth << endl;
                }
            }
        }
    
};

int main() {
    DanhSachHocVien dshv;
    dshv.nhapSoLuong();
    dshv.nhapDanhSach();
    dshv.locNamSinh();
    return 0;
}