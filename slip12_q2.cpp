#include <iostream>
#include <algorithm> // for sorting array

using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    // Dynamic constructor
    Array(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }

    // Member function to display median of array
    void displayMedian() {
        sort(arr, arr + size); // sort array in ascending order
        int mid = size / 2;
        if (size % 2 == 0) {
            cout << "Median is: " << (arr[mid - 1] + arr[mid]) / 2.0 << endl;
        } else {
            cout << "Median is: " << arr[mid] << endl;
        }
    }
};

int main(void) {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    Array myArray(size);
    myArray.displayMedian();
}
