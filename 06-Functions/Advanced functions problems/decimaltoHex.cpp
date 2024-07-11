#include <bits/stdc++.h>

using namespace std;

string decimalToHex(int n) {
    string ans = "";
    int x = 1;

    while (x <= n) {
        x *= 16;
    }
    x /= 16;

    while (x > 0) {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;

        if (lastDigit <= 9) {
            ans += to_string(lastDigit);
        }
        else {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }

    if (ans.empty()) {
        return "0";
    }
    return ans;
}

int32_t main() {
    int n;
    cin >> n;

    cout << decimalToHex(n) << endl;
    return 0;
}