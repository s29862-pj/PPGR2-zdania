#include <iostream>
using namespace std;

int main() {
    int n;

   cout << "Wpisz dowolną cyfrę n: ";
   cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        int termSum = 0;

        for (int j = 1; j <= i; ++j) {
            termSum += j;
        }

        cout << "1";
        for (int k = 2; k <= i; ++k) {
            cout << "+" << k;
        }

        cout << " = " << termSum << std::endl;

        sum += termSum;
    }

    cout << "\nSuma: " << sum << std::endl;

    return 0;
}


