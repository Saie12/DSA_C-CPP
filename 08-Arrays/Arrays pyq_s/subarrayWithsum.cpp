#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    int i, j, st, en, sum;
    i = j = sum = 0;
    st = en = -1;

    while (j < n && sum+a[j] <= s) {
        sum += a[j];
        j++;
    }

    if (sum == s) {
        cout << i+1 << " " << j << endl;
        return 0;
    }

    while (j < n) {
        sum += a[j];
        while (sum > s) {
            sum -= a[i];
            i++;
        }
        if (sum == s) {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}