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

void checkIntVector(vector<int> vectorToCheck ) {
    cout << "Vector size: " << vectorToCheck.size() << endl;
    int counter = 0;

    for (auto it = vectorToCheck.cbegin();
         it != vectorToCheck.cend(); ++it, ++counter) {
        cout << "Element " << counter << ": " << *it << endl;
    }
}

void checkStringVector(vector<string> vectorToCheck ) {
    cout << "Vector size: " << vectorToCheck.size() << endl;
    int counter = 0;

    for (auto it = vectorToCheck.cbegin();
         it != vectorToCheck.cend() && !it->empty(); ++it, ++counter) {
        cout << "Element " << counter << ": " << *it << endl;
    }
}