#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
    string s1, s2;

    while (cin >> s1) {
        s2 += s1 + " ";
        cout << s2 << endl;
    }

    return 0;
}
