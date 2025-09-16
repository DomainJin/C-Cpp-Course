#include <iostream>
using namespace std;

int main() {
    string lastName = "Do";
    string firstName = "Minh Chinh";

    string fullName = lastName + " " + firstName;
    cout << fullName << endl;

    string greeting = "Hello, ";
    string say = greeting.append(fullName);
    cout << say << endl;

    cout << "Số lượng ký tự trong chuỗi say: " << say.length() << endl;

    bool isOverTenCharacters = say.length() > 10;
    cout << "Chuỗi say có hơn 10 ký tự: " << isOverTenCharacters << endl;
    string finalResult = isOverTenCharacters ? "Chuỗi say có hơn 10 ký tự" : "Chuỗi say không có hơn 10 ký tự";
    cout << finalResult << endl;

}