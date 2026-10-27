#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;

    int nums[size];

    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}