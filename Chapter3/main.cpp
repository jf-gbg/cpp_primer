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

string sa[10];
int ia[10];

int main() {
    constexpr size_t arraySize = 10;
    int ia[arraySize];

    for (size_t i = 0; i < arraySize; ++i) {
        ia[i] = i;
    }

    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;

}

//42
//65
//95
//100
//39
//67
//95
//76
//88
//76
//83
//92
//76
//93