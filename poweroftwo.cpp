#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << "Yes, Power of 2";
    else
        cout << "No, Not Power of 2";

    return 0;
}