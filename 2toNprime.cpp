#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrime(int N) {
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int N;
    cout<<"Enter N:";
    cin >> N;

    printPrime(N);

    return 0;
}