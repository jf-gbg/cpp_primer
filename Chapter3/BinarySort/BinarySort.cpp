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

int BinarySort() {
    vector<string> text {"a", "b", "c", "d", "e", "f",
                         "g", "h", "i", "j", "k", "l", "m"};
    string sought = "m";
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg)/2;

    while(mid!=end && *mid!=sought) {
        if(sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg)/2;
    }

    cout << "Result: " << *mid << endl;
    return 0;
}