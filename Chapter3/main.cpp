#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::isspace;

int main() {
    string s = "hello";
    for (auto c : s) {
        s[c] = 'X';
    }

    for (decltype(s.size()) index = 0; index < s.size(); index++) {
        s[index] = 'X';
    }

    decltype(s.size()) index = 0;
    while (index < s.size()) {
        s[index] = 'X';
        index++;
    }

    cout << s << endl;

    return 0;
}
