#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main() {
    vector<int> ivec {0,1,2,3,4,5};
    int intArr[6];
    auto beg = ivec.cbegin(), end = ivec.cend();
    int *arrBeg = intArr;

    while (beg != end) {
        *arrBeg = *beg;
        arrBeg++;
        beg++;
    }

    for (auto i : intArr) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}