#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::size;

#include <cstring>
using std::string;
using std::strcpy;

#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

//prints
//h
//e
//l
//l
//o
int Exercise337() {
    const char ca[] = {'h','e','l','l','o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }

    return 0;
}