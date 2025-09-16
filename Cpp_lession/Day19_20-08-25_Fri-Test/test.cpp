#include <iostream>
using namespace std;

int main() {
    //Input
    int n;
    int target;
    cout << "Enter the length of the num array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the target: ";
    cin >> target;
    //Process
    int result;
    int sum_of_3_previous = 0;
    int sum_of_3_present = 0;
        
    for (int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                sum_of_3_present = arr[i] + arr[j] + arr[k];
                if (abs(sum_of_3_present - target) < abs(sum_of_3_previous - target)) {
                    result = sum_of_3_present;
                    //check:
                    // cout << arr[i] << " + " << arr[j] << " + " << arr[k] << " = " << sum_of_3_present << endl;
                }
                sum_of_3_previous = sum_of_3_present;
            }
        }
    }

    cout << "The sum that is closest to the target is: " << result << endl;
    return 0;
}