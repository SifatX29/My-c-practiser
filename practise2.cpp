#include <iostream>
using namespace std;

void primeN() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Not prime";
        return;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "Not prime";
            return;
        }
    }

    cout << "Prime";
}

int main() {
    primeN();
    return 0;
}