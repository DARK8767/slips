#include <iostream>
#include <cstring>

using namespace std;

class printdata {
public:
    void print(int value) {
        cout << "Integer Value : " << value << endl;
    }

    void print(char *value) {
        cout << "Character Value : \"" << value << "\"" << endl;
    }
};

int main(void) {
    printdata p;
    int num = 33;
    char str[] = "GOLD";
    p.print(num);
    p.print(str);
}