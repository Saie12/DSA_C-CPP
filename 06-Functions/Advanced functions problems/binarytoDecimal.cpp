#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int binaryToDecimal(int n) {
    int ans = 0;
    int x = 1;
    while (n > 0) {
        int last_digit = n % 10;
        ans += last_digit * x;
        x *= 2;
        n /= 10;
    }
    return ans;
}


int32_t main() {
    int n;
    cin >> n;

    cout << binaryToDecimal(n) << endl;
}