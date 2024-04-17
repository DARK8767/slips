#include <iostream>
using namespace std;

class Number {
private:
    int num1, num2;

public:
    Number()
    {
        num1 = 20;
        num2 = 50;
    }
    Number(int n1, int n2) 
    {
        num1 = n1;
        num2 = n2;
    }
    void displayMax() {
        cout << "Maximum of " << num1 << " and " << num2 << " is " << ((num1 > num2) ? num1 : num2) << endl;
    }
};

int main(void) {
    Number n1;
    Number n2(5, 10);
    n1.displayMax();
    n2.displayMax();
}