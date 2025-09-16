#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 1, 1, 4, 5, 6, 4};
    // vector<int> freq(1000, 0); // assuming numbers are less than 1000
    // for (int num : numbers) {
    //     freq[num]++;
    // }
    // int duplicateCount = 0;
    // for (int i = 0; i < freq.size(); ++i) {
    //     if (freq[i] > 1) {
    //         duplicateCount++;
    //     }
    // }
    // cout << "So phan tu trung lap (khong ke phan tu goc): " << duplicateCount << endl;
    set<int> newone(numbers.begin(), numbers.end());

    int gap_data = numbers.size() - newone.size();
    cout << "So phan tu trung lap (khong ke phan tu goc): " << gap_data << endl;
    
    return 0;
}