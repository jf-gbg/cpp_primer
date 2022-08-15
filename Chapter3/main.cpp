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

int main() {

    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7(10, "hi");


    return 0;
}
