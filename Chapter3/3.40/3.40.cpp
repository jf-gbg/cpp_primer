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

int Exercise340() {
    const char ca[] = "Hello";
    const char ca2[] = "There!";

    char ca3[13];

    strcpy(ca3, ca);
    strcat(ca3, " ");
    strcat(ca3, ca2);

    cout << ca3 << endl;
    return 0;
}
