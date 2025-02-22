#include <bits/stdc++.h>

using namespace std;

int main() {

    string str, str1, str2, s; //Zero based indexing

    string sr(6, '0'); // Create a string of "aaaaaa"
    cout << sr << endl;

    getline(cin, s); // Input a string with spaces
    cout << endl;

    //append or add or concatenate 2 strings

    str1 = "worry";
    str2 = "about me";

    str1.append(str2); // OR str1 = str1 + str2
    cout << str1 + str2 << endl; // str1 already contains "worryabbout me"

    // length() or size() is same
    for (int i = 0; i < str1.length(); i++) {
        cout << str1[i] << " "; // we can treat strings like arrays
    }
    cout << endl;

    str1.clear(); // empty string
    str1 = "lost frequencies";
    // cout << str1 << " " << str2 << endl;

    // compare function -> return 0 if true or string equal

    cout << str1.compare(str2) << endl; // return +ve number means that str1 is lexicographical greater than str2
    cout << str2.compare(str1) << endl; // return -ve number means str2 is smaller

    str2 = str1;
    // self explanatory
    if (!str1.compare(str2)) {
        cout << "str1 and str2 are equal" << endl;
    } else {
        cout << "str1 and str2 are not equal" << endl;
    }
    cout << endl;

    if (str.empty()) {
        cout << "string is empty" << endl;
    }

    str = "greatness";
    str.erase(5, 4); // it deletes the character starting from index 5 that is n to 5+4=9 is s
    cout << str << endl; // output "great" only

    cout << str.find("eat") << endl; // found "eat" in "great" at index 2

    cout << str.insert(5, "ness") << endl; // this is not zero based indexing

    // substr(starting index, length)
    s = str.substr(2, 5); // copy char from index 2 that is "e" till 5 ie "t" in word "greatness"
    cout << s << endl;

    
    // stoi converts string to int
    s = "3000";
    int x = stoi(s); // convert string to int datatype
    cout << x/10 << endl;

    x = 420;
    s = to_string(x);
    cout << s + " samaz jao" << endl; // convert int to string
    cout << endl;

    str += str1 + str2 + s + "@#!$%&*($#@1356";
    cout << str << endl; // adding all the strings or concatenating
    cout << endl;

    //sorting string
    sort(str.begin(), str.end());
    cout << str << endl; // 2 spaces are sorted first because in the word "lost frequencies"


    return 0;
}