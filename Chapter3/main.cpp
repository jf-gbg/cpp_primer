#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::isspace;

int main() {
    string s = "h!e,,.ll;/o";
    string sOut = "";

    for (auto &c : s) {
        if (!ispunct(c))
            sOut += c;
    }

//    for (decltype(s.size()) index = 0; index < s.length(); index++) {
//        if (!ispunct(s[index]))
//            sOut += s[index];
//    }

    cout << sOut << endl;

    return 0;
}
