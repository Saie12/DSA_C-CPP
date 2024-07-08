#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int originalN = n;
    while (n > 0) {
        int lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n = n/10;
    }

    if (sum == originalN) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not an Armstrong Number";
    }


    return 0;
}