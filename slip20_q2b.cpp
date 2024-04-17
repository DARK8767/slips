#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    ifstream infile;
    ofstream upperfile, lowerfile, digitfile, convertfile;
    infile.open("Sample.txt");
    upperfile.open("Upper.txt");
    lowerfile.open("Lower.txt");
    digitfile.open("Digit.txt");
    convertfile.open("Convert.txt");

    char ch;
    while (infile >> ch) {
        if (isupper(ch)) {
            upperfile << ch;
        } else if (islower(ch)) {
            lowerfile << ch;
        } else if (isdigit(ch)) {
            digitfile << ch;
        }
        convertfile << (char)toupper(ch);
    }

    infile.close();
    upperfile.close();
    lowerfile.close();
    digitfile.close();
    convertfile.close();
}