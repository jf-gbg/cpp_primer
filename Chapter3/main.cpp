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
    for (auto &c : s) {
        c = 'X';
    }
    cout << s << endl;

    return 0;
}
