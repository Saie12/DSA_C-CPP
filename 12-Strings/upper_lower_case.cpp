#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    
    //using transform function
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}