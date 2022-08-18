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

string sa[10];
int ia[10];

int main() {

    string sa2[10];
    string ia2[10];

    cout<< "sa" << endl;
    for (auto s : sa) {
        cout << s << endl;
    }
    cout << "ia" << endl;
    for (auto i : ia) {
        cout << i << endl;
    }
    cout << "sa2" << endl;
    for (auto s : sa2) {
        cout << s << endl;
    }
    cout << "ia2" << endl;
    for (auto i : ia2) {
        cout << i << endl;
    }
    return 0;
}

//42
//65
//95
//100
//39
//67
//95
//76
//88
//76
//83
//92
//76
//93