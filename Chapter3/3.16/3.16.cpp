#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

void checkIntVector(vector<int> vectorToCheck ) {
    int size = vectorToCheck.size();
    cout << "Vector size: " <<size << endl;
    for (int i = 0; i <= size - 1; ++i) {
        if (vectorToCheck.size() > 0)
            cout << "Element " << i << ": " << vectorToCheck[i] << endl;
    }
}

void checkStringVector(vector<string> vectorToCheck ) {
    int size = vectorToCheck.size();
    cout << "Vector size: " <<size << endl;
    for (int i = 0; i <= size - 1; ++i) {
        if (vectorToCheck.size() > 0)
            cout << "Element " << i << ": " << vectorToCheck[i] << endl;
    }
}