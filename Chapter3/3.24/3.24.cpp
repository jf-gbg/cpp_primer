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

int Exercise324() {
    vector<int> ivec {3, 5, 7, 2, 6, 4, 9, 9};
    auto beg = ivec.cbegin();
    auto end = ivec.cend();
    decltype(ivec.size()) counter = ivec.size();

    while(counter != ivec.size() / 2) {
        cout << (*beg + *(end - 1)) << endl;
        beg++;
        end--;
        counter--;
    }

    while(counter != ivec.size() / 2) {
        cout << *beg + *(beg + 1) << endl;
        beg += 2;
        counter--;
    }

    return 0;
}