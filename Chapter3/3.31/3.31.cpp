#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

int exercise331() {
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