#include <bits/stdc++.h>

using namespace std;

int main() {

    // largest word in a sentence
    int n;
    cin >> n;
    cin.ignore();

    char arr[n+1];
    
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0; 
    int maxLen = 0;
    int st = 0;
    int maxst = 0;



    while (1) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxst = st;
            }

            st = i+1;
            currLen = 0;
        } 

        else {
        currLen++;
        }

        if (arr[i] == '\0') {
            break;
        }

        i++;
    }

    cout << maxLen << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[maxst+i];
    }

    cout << endl;


    return 0;
}