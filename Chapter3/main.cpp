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
    vector<int> ints;
    int input;

    while(cin >> input)
        ints.push_back(input);

    return 0;
}
