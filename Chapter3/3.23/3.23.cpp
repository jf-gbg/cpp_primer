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

int exercise323() {
    vector<int> ivec;
    for (decltype(ivec.size()) i = 1; i != 11; ++i) {
        ivec.push_back(i);
    }

    for (auto num : ivec) {
        cout << num << endl;
    }

    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it *= 2;
    }

    for (auto num : ivec) {
        cout << num << endl;
    }

    return 0;
}
