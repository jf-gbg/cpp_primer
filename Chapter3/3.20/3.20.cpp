#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int problem320() {
    vector<int> ivec {3, 5, 7, 2, 6, 4, 9, 9};

    //forward 8, 9, 10, 18
    for (decltype(ivec.size()) i = 0; i < ivec.size(); i += 2) {
        cout << (ivec[i] + ivec[i + 1]) << endl;
    }

    //backward - 18, 10, 9, 8
    for (decltype(ivec.size()) i = ivec.size(); i > 0; i -= 2) {
        cout << (ivec[i - 1] + ivec[i - 2]) << endl;
    }

    //outer to inner - 12, 14, 11, 8
    for (decltype(ivec.size()) i = 0; i != ivec.size() / 2; i++) {
        cout << ivec[i] + ivec[ivec.size() - 1 - i] << endl;
    }

    return 0;
}