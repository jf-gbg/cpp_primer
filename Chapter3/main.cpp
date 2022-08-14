#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

int main() {
    vector<string> strings;
    string word;

    while (cin >> word)
        strings.push_back(word);

    return 0;
}
