#include <iostream>
using namespace std;

int main() {
    // A) Retrieve the numbers "a" and "b" from the User and print them to the screen.
    int a, b;

    std::cout << "Enter the value of a: ";
    std::cin >> a;

    std::cout << "Enter the value of b: ";
    std::cin >> b;

    std::cout << "\nValues entered by the user:\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n\n";

    // B) Print a row of asterisks with length "a".
    std::cout << "Row of asterisks with length a:\n";
    for (int i = 0; i < a; ++i) {
        std::cout << "*";
    }
    std::cout << "\n\n";

    // C) Print a column of asterisks of length "b".
    std::cout << "Column of asterisks with length b:\n";
    for (int i = 0; i < b; ++i) {
        std::cout << "*\n";
    }
    std::cout << "\n";

    // D) Print a filled rectangle of asterisks with dimensions "a" by "b".
    std::cout << "Filled rectangle of asterisks with dimensions a by b:\n";
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // E) Prints the circumference (border) of the rectangle of stars with dimensions "a" by "b".
    std::cout << "Circumference (border) of the rectangle with dimensions a by b:\n";
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }



