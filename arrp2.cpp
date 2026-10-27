#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = 5;

    int minIndex = 0, maxIndex = 0;

    for(int i = 1; i < size; i++) {
    if(arr[i] < arr[minIndex]){
        minIndex = i;}

        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // swap using built-in function
    swap(arr[minIndex], arr[maxIndex]);

    // print array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}