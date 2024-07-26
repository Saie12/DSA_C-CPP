#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    int freq[26];

    for (int i = 0; i < 26; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++) {
        freq[s[i]-'a']++;
    }

    char answer;
    int maxFreq = -1;

    for (int i = 0; i < 26; i++) {
        //if we put maxFreq < ans[i] it will provide first char with highest frequency
        //if we put maxFreq <= ans[i] it will provide last char with highest frequency
        if (maxFreq < freq[i]) {
            maxFreq = freq[i];
            answer = i + 'a';
        }
    }

    cout << maxFreq << " " << answer << endl;


    return 0;
}