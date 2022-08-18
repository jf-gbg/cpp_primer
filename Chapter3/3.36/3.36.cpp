#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::size;

#include <string>
using std::string;

#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

int Exercise336() {
    int ia[] {2,4,6,8,10};
    int ia2[] {2,4,6,8,10};
    vector<int> ivec {2,4,6,8,10,12};
    vector<int> ivec2 {2,4,6,8,10,10};

    int *p = begin(ia), *l = end(ia);
    int *p2 = begin(ia2), *l2 = end(ia2);
    auto b = ivec.cbegin(), e = ivec.cend();
    auto b2 = ivec2.cbegin(), e2 = ivec2.cend();

    decltype(size(ia)) iaSize = size(ia), ia2Size= size(ia2);
    decltype(size(ivec)) ivecSize = size(ivec), ivec2Size = size(ivec2);

    bool arraysAreEqual = true;
    bool vectorsAreEqual = true;

    if(iaSize != ia2Size)
        arraysAreEqual = false;

    if(ivecSize != ivec2Size)
        vectorsAreEqual = false;

    while(p != l) {
        if (*p != *p2)
            arraysAreEqual = false;
        p++;
        p2++;
    }

    while(b != e) {
        if (*b != *b2)
            vectorsAreEqual = false;
        b++;
        b2++;
    }

    cout << arraysAreEqual << endl;
    cout << vectorsAreEqual << endl;

    return 0;
}