#include <bits/stdc++.h>

using namespace std;

// Function to implement the Sieve of Eratosthenes
void primesieve(int n) {
    // Array to mark non-prime numbers, initialized to 0 (prime)
    int prime[n + 1] = {0};

    // Start from the first prime number, which is 2
    for (int i = 2; i <= n; i++) {
        // If the number is still marked as prime
        if (prime[i] == 0) {
            // Mark all multiples of i as non-prime
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 1; // Marking as non-prime
            }
        }
    }

    // Output all prime numbers
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            cout << i << " "; // Print the prime number
        }
    }
    cout << endl; 
}

int main() {
    int n;
    cin >> n;

    primesieve(n);

    return 0; 
}