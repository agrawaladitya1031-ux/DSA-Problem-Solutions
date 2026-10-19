
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;

    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int position = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            position = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (position != -1)
        cout << "Element found at index " << position << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
