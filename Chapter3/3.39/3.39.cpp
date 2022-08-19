#include <iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::size;

#include <string>
#include <cstring>
using std::string;


#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

int Exercise339() {
    string string1 = "hello", string2 = "goodbye";
    bool stringsAreEqual = true;

    const char ca1[] = "hello";
    const char ca2[] = "goodbye";
    bool cStringsAreEqual = true;

    if(strcmp(ca1,ca2) < 0 || strcmp(ca1, ca2) > 0)
        cStringsAreEqual = false;

    if(string1 != string2)
        stringsAreEqual = false;


    cout << cStringsAreEqual << " " << stringsAreEqual << endl;

    return 0;
}