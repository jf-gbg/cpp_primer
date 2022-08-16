#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

void checkIntVector(vector<int> vectorToCheck ) {
    decltype(vectorToCheck.size()) vectorSize = vectorToCheck.size();
    cout << "Vector size: " << vectorSize << endl;
    for (int i = 0; i <= vectorSize - 1; ++i) {
        if (vectorSize > 0)
            cout << "Element " << i << ": " << vectorToCheck[i] << endl;
    }
}

void checkStringVector(vector<string> vectorToCheck ) {
    decltype(vectorToCheck.size()) vectorSize = vectorToCheck.size();
    cout << "Vector size: " << vectorSize << endl;
    for (int i = 0; i <= vectorSize - 1; ++i) {
        if (vectorSize > 0)
            cout << "Element " << i << ": " << vectorToCheck[i] << endl;
    }
}