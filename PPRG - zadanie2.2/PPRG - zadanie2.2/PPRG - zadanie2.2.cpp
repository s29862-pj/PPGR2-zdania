#include <iostream>;
using namespace std;

int main() {
        int a, b;

        cout << "Wpisz dowolną liczbę a: ";
        cin >> a;

        cout << "Wpisz dowolną liczbę b: ";
        cin >> b;

        cout << "\nLiczby wpisane przez użytkownika:\n";
        cout << "a: " << a << "\n";
        cout << "b: " << b << "\n\n";

        
        cout << "Rządki a:\n";
        for (int i = 0; i < a; ++i) {
            cout << "*";
        }
        cout << "\n\n";

        
        cout << "Kolumny b:\n";
        for (int i = 0; i < b; ++i) {
            cout << "*\n";
        }
        cout << "\n";

        
        cout << "Prostokąt na podstawie podanych wartości (wypełniony):\n";
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cout << "*";
            }
                cout << "\n";
        }
        cout << "\n";

        
        cout << "Prostokąt (ramka) na podstawie podanych wartości:\n";
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << "\n";
        }
}
