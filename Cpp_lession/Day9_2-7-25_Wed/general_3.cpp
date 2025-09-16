#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Nhập ngày (1-7): ";
    cin >> day;
    string dayName;
    switch (day) {
        case 1:
            dayName = "Thứ Hai";
            break;
        case 2:
            dayName = "Thứ Ba";
            break;
        case 3:
            dayName = "Thứ Tư";
            break;
        case 4:
            dayName = "Thứ Năm";
            break;
        case 5:
            dayName = "Thứ Sáu";
            break;
        case 6:
            dayName = "Thứ Bảy";
            break;
        case 7:
            dayName = "Chủ Nhật";
            break;
        default:
            dayName = "Ngày không hợp lệ";
    }
    cout << "Ngày tương ứng là: " << dayName << endl;
    return 0;
}