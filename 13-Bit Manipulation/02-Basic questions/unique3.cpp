#include <bits/stdc++.h>

using namespace std;

// Function to set a specific bit in a number
int setBit(int n, int pos) {
    return (n | (1 << pos));
}

// Function to check if a specific bit is set
bool getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

// Function to find the unique number in the array
int unique(int arr[], int n) {
    int result = 0;

    // Iterate through each bit position (0 to 31 for 32-bit integers)
    for (int i = 0; i < 32; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (getBit(arr[j], i)) {
                sum++;
            }
        }
        // Check if the sum of bits is not divisible by 3
        if (sum % 3 != 0) {
            result = setBit(result, i);
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << "The unique number is: " << unique(arr, 10) << endl;

    return 0;
}