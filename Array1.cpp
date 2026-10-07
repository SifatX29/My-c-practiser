#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6; 

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallIndex = 0;
    int largeIndex = 0;

    for(int i = 0; i < size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
            smallIndex = i;
        }

        if(nums[i] > largest) {
            largest = nums[i];
            largeIndex = i;
        }
    }

    cout << "smallest = " << smallest << " index = " << smallIndex << endl;
    cout << "largest = " << largest << " index = " << largeIndex << endl;

    return 0;
}