#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to add two binary numbers
string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    // Iterate through both strings from right to left
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        // Add the current digits if available
        if (i >= 0) sum += a[i] - '0';
        if (j >= 0) sum += b[j] - '0';

        // Append the result digit
        result = to_string(sum % 2) + result;

        // Update the carry
        carry = sum / 2;

        // Move to the next digits
        i--;
        j--;
    }

    return result;
}

int main() {
    string a, b;

    // Input two binary numbers
    cout << "Enter first binary number: ";
    cin >> a;
    cout << "Enter second binary number: ";
    cin >> b;

    // Call the addBinary function and display the result
    string sum = addBinary(a, b);
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}
