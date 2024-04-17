#include <iostream>

using namespace std;

// Declare inline function to calculate perimeter
inline float Perimeter(float length, float width) {
    return 2 * (length + width);
}

// Declare inline function to calculate area
inline float Area(float length, float width) {
    return length * width;
}

int main(void) {
    float length, width;

    // Get input from user
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    float perimeter = Perimeter(length, width);
    float area = Area(length, width);
    cout << "Perimeter of rectangle is: " << perimeter << endl;
    cout << "Area of rectangle is: " << area << endl;
}