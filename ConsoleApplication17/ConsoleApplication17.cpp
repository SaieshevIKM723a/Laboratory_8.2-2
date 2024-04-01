#include <iostream>

using namespace std;

int main() {
    const int size = 20;
    double array1[size];
    double array2[size];

    cout << "Enter elements for 1 array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i];
    }
    cout << "\nEnter elements for 2 array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array2[i];
    }
    int count = 0;
    for (int i = 0; i < size; ++i) {
        bool found = false;
        for (int j = 0; j < size; ++j) {
            if (array1[i] == array2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            ++count;
        }
    }
    cout << "\nQuantity of Elements of 1 array which doesn't enter in 2 array: " << count << endl;

    return 0;
}
