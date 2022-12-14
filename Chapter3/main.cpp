#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::size;

#include <string>
#include <cstring>
using std::string;
using std::strcpy;

#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];

    size_t cnt = 0;
    for (auto &row:ia) {
        for (auto &col:row) {
            col = cnt;
            ++cnt;
        }
    }

    for (auto &row : ia) {
        for (auto &col : row)
            cout << col << ' ';
        cout << endl;
    }

    for(auto *p = begin(ia);p != end(ia); ++p) {
        for(auto *i = begin(*p); i != end(*p); ++i)
            cout << *i << ' ';
        cout << endl;
    }

    for (auto i = 0; i != 3; ++i) {
        for (auto j = 0; j < 4; ++j) {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
