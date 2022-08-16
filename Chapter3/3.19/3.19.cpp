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

int problem319() {
    vector<int> ivec (10, 42); //preferred way, short, easy to read
    vector<int> ivec2 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> ivec3 = ivec;
}
