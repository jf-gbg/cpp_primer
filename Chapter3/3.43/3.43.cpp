#include <iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;

int exercise343() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];


    size_t cnt = 0;
    for (auto &row:ia) {
        for (auto &col:row) {
            col = cnt;
            ++cnt;
        }
    }

    for (int (&row)[4] : ia) {
        for (int &col : row)
            cout << col << ' ';
        cout << endl;
    }

    for(int (*p)[4] = begin(ia);p != end(ia); ++p) {
        for(int *i = begin(*p); i != end(*p); ++i)
            cout << *i << ' ';
        cout << endl;
    }

    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}