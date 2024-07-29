#include <bits/stdc++.h>

using namespace std;

// Function to check if a specific bit is set
int setBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n) {
    int xorsum = 0;

    // Calculate the XOR of all elements
    for (int i = 0; i < n; i++) {
        xorsum ^= arr[i];
    }

    // Find the position of the rightmost set bit
    int setbit = 0;
    int pos = 0;

    // Find the rightmost set bit
    while ((xorsum & (1 << pos)) == 0) {
        pos++;
    }

    int newxor = 0;

    // Divide elements into two groups and find the unique number in one group
    for (int i = 0; i < n; i++) {
        if (setBit(arr[i], pos)) {
            newxor ^= arr[i];
        }
    }

    // The second unique number can be found using XOR of the first unique number and xorsum
    int secondUnique = xorsum ^ newxor;

    // Output the unique numbers
    cout << "The two unique numbers are: " << newxor << " and " << secondUnique << endl;
}

int main() {
    int arr[] = { 1, 2, 3, 1, 2, 3, 5, 7 };
    unique(arr, 8);
    return 0;
}