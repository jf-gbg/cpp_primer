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

int Exercise341() {
    int int_arr[] = {0,1,2,3,4,5};
    vector<int> ivec(begin(int_arr), end(int_arr ));

    for (auto c : ivec) {
        cout << c << endl;
    }

    return 0;
}